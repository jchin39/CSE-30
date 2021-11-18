#ifndef Stack_H 
#define Stack_H

#include <iostream>
#include "LinkedList.h"
using namespace std;

class Stack : public LinkedList {
    public:
        Stack();
        ~Stack();
        void push(int val);
        void pop();
        void top();
};

#endif