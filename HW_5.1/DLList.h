#ifndef DLLIST_H_INCLUDED
#define DLLIST_H_INCLUDED

struct Node
{
    int x;
    Node *prev;
    Node *next;
};

class DLList
{
public:
    DLList ();
    ~DLList ();
    void insert(int x);
    void Delete(int x);
    Node search(int x);
    void display();
    int size();
private:
    Node *Head;
    Node *Tail;
};

#endif // DLLIST_H_INCLUDED
