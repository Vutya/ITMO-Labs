//
// Created by Вутя on 19.04.2017.
//

#ifndef HW_5_4_STACK_H
#define HW_5_4_STACK_H

#include <vector>

class stack
{
public:
    bool empty(); // Проверка вектора на пустоту
    void push(int el); // Добавляет элемент в стек
    void pop(); // Удаляет последний элемент из стека
    void display();
private:
    std::vector<int> stk;
};

#endif //HW_5_4_STACK_H
