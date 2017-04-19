#include <iostream>
#include "DLLQueue.h"

int main() {
    DLLQueue test;
    test.enqueue(7);
    test.enqueue(8);
    test.enqueue(235);
    test.enqueue(1);
    test.enqueue(0);
    test.enqueue(-234);
    test.enqueue(4574);
    test.enqueue(7);
    test.enqueue(7);
    test.dequeue();
    test.dequeue();
    test.dequeue();
    test.display();
    std::cout << test.size();
    return 0;
}