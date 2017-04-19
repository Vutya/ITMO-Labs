//
// Created by Вутя on 19.04.2017.
//

#include "queue.h"
#include <iostream>

bool queue::empty()
{
    return q.empty();
};
void queue::enqueue(int el)
{
    q.push_back(el);
};
void queue::dequeue()
{
    if(!empty())
        q.erase(q.begin());
    else
        std::cout << "Queue is empty.\n";
};
void queue::display()
{
    for (int i=0;i<q.size();i++)
        std::cout << q[i]<<" ";
    std::cout << std::endl;
};