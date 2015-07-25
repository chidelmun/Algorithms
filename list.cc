#include <iostream>
#include "llist.h"
using namespace std;

int main() {

    LinkedList list;

    list.addValue(5);
    list.addValue(10);
    list.addValue(20);

    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    // because there is no error checking in popValue(), the following
    // is undefined behavior. Probably the program will crash, because
    // there are no more values in the list.
    // cout << list.popValue() << endl;
    return 0;
}