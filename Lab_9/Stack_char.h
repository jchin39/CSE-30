#ifndef Stack_H 
#define Stack_H

#include <iostream>
#include "LinkedList_char.h"
using namespace std;

class Stack : public LinkedList {
    public:
        Stack();
        ~Stack();
        void push(char val);
        void pop();
        char& top();
};

#endif