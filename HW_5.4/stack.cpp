//
// Created by Вутя on 19.04.2017.
//

#include "stack.h"
#include <iostream>

bool stack::empty()
{
    return stk.empty();
};
void stack::push(int el)
{
    stk.push_back(el);
};
void stack::pop()
{
    if(!empty())
        stk.pop_back();
    else
        std::cout << "Stack is empty.\n";
};
void stack::display()
{
    for (int i=0;i<stk.size();i++)
        std::cout << stk[i]<<" ";
    std::cout << std::endl;
};