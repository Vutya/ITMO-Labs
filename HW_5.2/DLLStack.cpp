//
// Created by Вутя on 19.04.2017.
//

#include <iostream>
#include "DLLStack.h"

DLLStack::DLLStack ()
{
    Head=nullptr;
    Tail=nullptr;
};

DLLStack::~DLLStack ()
{
    while (Head)
    {
        Tail=Head->next;
        delete Head;
        Head=Tail;
    }
};

void DLLStack::push(int el)
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

void DLLStack::pop()
{
    Node *temp=Head;
    Head=temp->next;
    Head->next = temp->next->next;
};

void DLLStack::display()
{
    Node *temp=Head;
    while (temp)
    {
        std::cout<<temp->x<<" ";
        temp=temp->next;
    }
    std::cout<<std::endl;
};
int DLLStack::size()
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

bool DLLStack::empty()
{
    if (!Head)
        return true;
    else
        return false;
};
