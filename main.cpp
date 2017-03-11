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
    a.push(7);
    a.push(3);
    std::cout << a.top() << std::endl; // выводится вершина очереди
    a.pop();
    std::cout << a.top() << std::endl; //выводится вершина очереди после удаления
    a.push(19);
    a.push(15);
    std::cout << a.top() << std::endl; // выводится вершина очереди после доавления 2-ух элементов
    a.pop();
    a.pop();
    a.pop();
    std::cout << a.top() << std::endl;

    // создаётся вектор <5,4,6,3,2,8,2,29>
    std::vector<int> kek;
    kek.push_back(5);
    kek.push_back(4);
    kek.push_back(6);
    kek.push_back(3);
    kek.push_back(2);
    kek.push_back(8);
    kek.push_back(2);
    kek.push_back(29);

    for (int i = 0; i < kek.size(); i++)
        std::cout << kek [i]<< " ";
    std::cout << std::endl;

    // пирамидальная сортировка вектора
    heapsort(kek);

    for (int i = 0; i < kek.size(); i++)
        std::cout << kek [i]<< " ";

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
