//
// Created by Вутя on 03.05.2017.
//

#ifndef HW_5_6_BST_H
#define HW_5_6_BST_H

struct Node {
    int key;
    Node *left;
    Node *right;
    Node *parent;
};

class BST
{
public:
    BST();
    void Insert(int x);
    int Max(Node * k);
    int Min(Node * k);
    Node * Search(int k);
    void InorderTreeWalk(Node * k);
    void Transplant(Node * u,Node * v);
    void Delete(int x);
private:
    Node * root;
};

#endif //HW_5_6_BST_H
