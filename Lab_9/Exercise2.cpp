#include <iostream>
#include "Stack_char.h"

using namespace std;

int main() {
    Stack stack;
    cout << "Function call   " << "|   Output   |" << "   Stack Contents" << endl;
    cout << "isEmpty()";
    if (stack.isEmpty() == 1) {
        cout << "|   True    |";
    }
    if(stack.isEmpty() == 0) {
       cout << "|    False   |";
    }
    cout << "   None" << endl;
    cout << "push(A)";
    cout << "|      |";
    stack.push('A');
    stack.print();
    cout <<"" << endl;
    cout << "push(Y)";
    cout << "|      |";
    stack.push('Y');
    stack.print();
    cout << "" << endl;
    cout << "size()|   ";
    cout << stack.size();
    cout << "   |";
    stack.print();
    cout << "" << endl;
    cout << "pop()|   ";
    stack.pop();
    cout << "   |";
    stack.print();
    cout << "" << endl;
    cout << "isEmpty()";
    if (stack.isEmpty() == 1) {
        cout << "|   True    |";
    }
    if(stack.isEmpty() == 0) {
       cout << "|    False   |";
    }
    stack.print();
    cout <<"" << endl;
    cout << "push(D)";
    cout << "|      |";
    stack.push('D');
    stack.print();
    cout << "" << endl;
    cout << "top()";
    cout << "|     "<<stack.top()<<"    |";
    stack.print();
    cout <<"" << endl;
    cout << "push(T)";
    cout << "|      |";
    stack.push('T');
    stack.print();
    cout << "" << endl;
    cout << "pop()|   ";
    stack.pop();
    cout << "   |";
    stack.print();
    cout << "" << endl;
}