#include <iostream>
#include "queue.h"

int main() {
    queue test;
    test.enqueue(7);
    test.enqueue(45);
    test.enqueue(1);
    test.enqueue(-352);
    test.enqueue(0);
    test.enqueue(7);
    test.enqueue(7);
    test.display();
    test.dequeue();
    test.dequeue();
    test.dequeue();
    test.display();
    return 0;
}