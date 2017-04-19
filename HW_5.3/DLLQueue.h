//
// Created by Вутя on 19.04.2017.
//

#ifndef HW_5_3_DLLQUEUE_H
#define HW_5_3_DLLQUEUE_H

struct Node
{
    int x;
    Node *prev;
    Node *next;
};

class DLLQueue
{
public:
    DLLQueue ();
    ~DLLQueue ();
    void enqueue(int el);
    void dequeue();
    void display();
    int size();
    bool empty();
private:
    Node *Head;
    Node *Tail;
};

#endif //HW_5_3_DLLQUEUE_H
