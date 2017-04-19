#include <iostream>
#include "DLLStack.h"

int main() {
    DLLStack test;
    test.push(7);
    test.push(8);
    test.push(235);
    test.push(1);
    test.push(0);
    test.push(-234);
    test.push(4574);
    test.push(7);
    test.push(7);
    test.pop();
    test.pop();
    test.display();
    std::cout << test.size();
    return 0;
}