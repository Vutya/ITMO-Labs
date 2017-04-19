#include <iostream>
#include "DLList.h"

using namespace std;

int main()
{
    DLList test;
    test.insert(6);
    test.insert(7);
    test.insert(8);
    test.insert(9);
    test.insert(10);
    test.display();
    cout << test.size() << endl;
    test.Delete(10);
    test.Delete(6);
    test.Delete(8);
    test.insert(7);
    test.insert(7);
    test.Delete(11);
    test.display();
    cout << test.size() << endl;
    return 0;
}