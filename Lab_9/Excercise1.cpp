#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack stack;
    if (stack.isEmpty() == 1) {
        cout << "Stack empty" << endl;
    }
    if (stack.isEmpty() == 0) {
       stack.pop();
    }
    if (stack.isEmpty() == 0) {
       stack.top();
    }
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    stack.top();
    stack.pop();
    cout << "size of stack is: " << stack.size() << endl;
    stack.top();
    stack.print();
}