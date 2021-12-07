#include <iostream>
#include "LinkedList_char.h"

using namespace std;

class Queue : public LinkedList {
    public:
        Queue();
        ~Queue();
        void enqueue(char val);
        char dequeue();
        char& front();
};