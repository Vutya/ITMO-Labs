//
// Created by Вутя on 10.03.2017.
//

#ifndef HW_2_QUEUE_H
#define HW_2_QUEUE_H

#include <vector>

class PriorityQueue
{
public:
    void heapify(int i);
    void push(int el); // Добавляет элемент в очередь
    void pop(); // Удаляет верхний элемент из очереди
    int top(); // Возвращает верхний элемент очереди, не удаляя его
private:
    std::vector<int> queue;
};

#endif //HW_2_QUEUE_H
