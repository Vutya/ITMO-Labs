//
// Created by Вутя on 03.05.2017.
//

#include "BST.h"
#include <iostream>

BST::BST()
{
    root=nullptr;
};

int BST::Max(Node * k)
{
    if (root) {
        if (!k)
            k = this->root;
        while (k->right != nullptr)
            k = k->right;
        return k->key;
    };
};

int BST::Min(Node * k)
{
    if (root) {
        if (!k)
            k = this->root;
        while (k->left != nullptr)
            k = k->left;
        return k->key;
    };
};

void BST::InorderTreeWalk(Node * k)
{
    if (k) {
        InorderTreeWalk(k->left);
        std::cout << k->key << " ";
        InorderTreeWalk(k->right);
    }
};

Node * BST::Search(int k)
{
    Node * x = root;
    while (x && k!=x->key) {
        if (k < x->key)
            x = x->left;
        else
            x= x->right;
    }
    return x;
};

void BST::Insert(int key)
{
    Node *z = new Node;
    z->key=key;
    z->left=nullptr;
    z->right=nullptr;
    Node *y = nullptr;
    Node *x = root;
    while (x !=nullptr)
    {
        y=x;
        if (z->key < x->key)
            x=x->left;
        else
            x=x->right;
    }
    z->parent=y;
    if (!y)
        root = z;
    else if (z->key < y->key)
        y->left=z;
    else
        y->right=z;
};

void BST::Transplant(Node * u,Node * v)
{
    if (!u->parent)
        root=v;
    else if (u==u->parent->left)
        u->parent->left=v;
    else
        u->parent->right = v;
    if (v)
        v->parent=u->parent;
};

void BST::Delete(int x)
{
    if (Search(x)) {
        Node *z = Search(x);
        if (!z->left)
            Transplant(z, z->right);
        else if (!z->right)
            Transplant(z, z->left);
        else {
            Node *y = Search(Min(z->right));
            std::cout<<y->key;
            if (y->parent != z) {
                Transplant(y, y->right);
                y->right = z->right;
                y->right->parent = y;
            }
            Transplant(z, y);
            y->left = z->left;
            y->left->parent = y;
        }
    }
    else {
        std::cout << "There is no such element." << std::endl;
        return;
    }
};