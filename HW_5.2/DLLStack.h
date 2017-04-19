//
// Created by Вутя on 19.04.2017.
//

#ifndef HW_5_2_DLLSTACK_H
#define HW_5_2_DLLSTACK_H

struct Node
{
    int x;
    Node *prev;
    Node *next;
};

class DLLStack
{
public:
    DLLStack ();
    ~DLLStack ();
    void push(int el);
    void pop();
    void display();
    int size();
    bool empty();
private:
    Node *Head;
    Node *Tail;
};

#endif //HW_5_2_DLLSTACK_H
