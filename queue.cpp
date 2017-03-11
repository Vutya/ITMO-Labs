//
// Created by Вутя on 10.03.2017.
//

#include <iostream>
#include "queue.h"

void PriorityQueue::heapify(int i)
{
    int leftChild;
    int rightChild;
    int largestChild;

    for ( ; ; )
    {
        leftChild = 2 * i + 1;
        rightChild = 2 * i + 2;
        largestChild = i;

        if (leftChild < queue.size() && queue[leftChild] > queue[largestChild])
        {
            largestChild = leftChild;
        }

        if (rightChild < queue.size() && queue[rightChild] > queue[largestChild])
        {
            largestChild = rightChild;
        }

        if (largestChild == i)
        {
            break;
        }

        int temp = queue[i];
        queue[i] = queue[largestChild];
        queue[largestChild] = temp;
        i = largestChild;
    }
}

void PriorityQueue::push(int el)  // Добавляет элемент в очередь
{
    queue.push_back(el);
    int i = queue.size()-1;
    int parent = (i - 1) / 2;

    while (i > 0 && queue[parent] < queue[i])
    {
        int temp = queue[i];
        queue[i] = queue[parent];
        queue[parent] = temp;

        i = parent;
        parent = (i - 1) / 2;
    }
}

void PriorityQueue::pop()  // Удаляет верхний элемент из очереди
{
    if (queue.empty())
        std::cerr << "Queue is empty.";
    queue[0] = queue[queue.size()-1];
    queue.pop_back();
    heapify (0);
}

int PriorityQueue::top()  //Возвращает верхний элемент очереди, не удаляя его
{
    if (queue.empty())
        std::cerr << "Queue is empty.";
    return queue.front();
}
