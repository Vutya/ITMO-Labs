#include <iostream>
#include "DLList.h"

DLList::DLList ()
{
    Head=nullptr;
    Tail=nullptr;
};

DLList::~DLList ()
{
    while (Head)
    {
        Tail=Head->next;
        delete Head;
        Head=Tail;
    }
};

Node DLList::search(int x)
{
    Node *temp=Head;
    while ((temp!=nullptr)&&(temp->x!=x))
        temp=temp->next;
    return *temp;
}

void DLList::insert(int x)
{
    Node *temp = new Node;
    temp->next=nullptr;
    temp->x=x;
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

void DLList::Delete(int x)
{
    Node *temp=Head;
    while ((temp!=nullptr)&&(temp->x!=x))
        temp=temp->next;
    if (temp==nullptr)
    {
        std::cout<< "There is no such element in the list.\n";
        return;
    }
    if (temp==Head)
    {
        Head=temp->next;
        Head->next = temp->next->next;
    }
    else
    {
        if (temp->prev!= nullptr)
            temp->prev->next=temp->next;
        else
            Head=temp->next;
        if (temp->next!=nullptr)
            temp->next->prev=temp->prev;
    }
};

void DLList::display()
{
    Node *temp=Head;
    while (temp) //temp!=nullptr
    {
        std::cout<<temp->x<<" ";
        temp=temp->next;
    }
    std::cout<<std::endl;
};
int DLList::size()
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
