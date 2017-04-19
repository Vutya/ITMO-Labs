//
// Created by Вутя on 19.04.2017.
//

#ifndef HW_5_5_QUEUE_H
#define HW_5_5_QUEUE_H

#include <vector>

class queue
{
public:
    bool empty();
    void enqueue(int el); // Добавляет элемент в очередь
    void dequeue(); // Удаляет первый элемент из очереди
    void display();
private:
    std::vector<int> q;
};

#endif //HW_5_5_QUEUE_H
