#include "stack.h"

int main() {
    stack test;
    test.pop();
    test.push(5);
    test.push(5);
    test.push(5);
    test.push(5);
    test.push(6);
    test.push(34);
    test.push(0);
    test.push(9);
    test.display();
    test.pop();
    test.pop();
    test.pop();
    test.display();
    return 0;
}