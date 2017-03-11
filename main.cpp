#include <iostream>
#include <vector>
#include "queue.h"

void heapsort(std::vector<int> &vec);

int main() {
    PriorityQueue a;

    // создается очередь из элементов <5,12,7,7,3>
    a.push(5);
    a.push(12);
    a.push(7);
    a.push(3);
    a.push(7);
    std::cout << a.top() << std::endl; // выводится вершина очереди
    a.pop();
    std::cout << a.top() << std::endl; //выводится вершина очереди после удаления одного элемента
    a.push(19);
    a.push(15);
    std::cout << a.top() << std::endl; // выводится вершина очереди после добавления 2-ух элементов
    a.pop();
    a.pop();
    a.pop();
    std::cout << a.top() << std::endl; // выводится вершина очереди после удаления 3-ёх элементов

    // создаётся вектор <5,4,6,3,2,8,2,29>
    std::vector<int> nevector;
    nevector.push_back(5);
    nevector.push_back(4);
    nevector.push_back(6);
    nevector.push_back(3);
    nevector.push_back(2);
    nevector.push_back(8);
    nevector.push_back(2);
    nevector.push_back(29);

    for (int i = 0; i < nevector.size(); i++)
        std::cout << nevector [i]<< " ";
    std::cout << std::endl;

    // пирамидальная сортировка вектора
    heapsort(nevector);

    for (int i = 0; i < nevector.size(); i++)
        std::cout << nevector [i]<< " ";

    return 0;
}

void heapsort(std::vector<int> &vec) {
    PriorityQueue tmp;
    for (int i = 0; i < vec.size(); i++)
        tmp.push(vec[i]);

    for (int i = vec.size() - 1; i >= 0; i--)
    {
        vec[i] = tmp.top();
        tmp.pop();
        tmp.heapify(0);
    };
}
