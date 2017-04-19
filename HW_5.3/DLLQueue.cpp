//
// Created by Вутя on 19.04.2017.
//

#include <iostream>
#include "DLLQueue.h"

DLLQueue::DLLQueue ()
{
    Head=nullptr;
    Tail=nullptr;
};

DLLQueue::~DLLQueue ()
{
    while (Head)
    {
        Tail=Head->next;
        delete Head;
        Head=Tail;
    }
};

void DLLQueue::enqueue(int el)
{
    Node *temp = new Node;
    temp->next=nullptr;
    temp->x=el;
    if (Head == nullptr)
    {
        temp->prev=nullptr;
        Head=temp;
        Tail=temp;
    } else {
        temp->next=Head;
        Head->prev=temp;
        Head=temp;
    }
};

void DLLQueue::dequeue()
{
    Node *temp=Tail;
    Tail=temp->prev;
    Tail->next= nullptr;
};

void DLLQueue::display()
{
    Node *temp=Head;
    while (temp) //temp!=nullptr
    {
        std::cout<<temp->x<<" ";
        temp=temp->next;
    }
    std::cout<<std::endl;
};
int DLLQueue::size()
{
    Node *temp=Head;
    int x=0;
    while (temp)
    {
        x++;
        temp=temp->next;
    }
    return x;
};

bool DLLQueue::empty()
{
    if (!Head)
        return true;
    else
        return false;
};

