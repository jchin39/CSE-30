#include <iostream>
#include "Queue_char.h"
#include "LinkedList_char.h"

using namespace std;

Queue::Queue():LinkedList() {

}
Queue::~Queue() {

}

void Queue:: enqueue(char val) {
insertAtBack(val);
}

char Queue:: dequeue() {
    if (isEmpty() == 1) {
        return 1;
    }
    Node* temp = first;
    char num = temp -> val;
    removeFromFront();
    return num;
}

char& Queue:: front() {

    Node* temp = first;
    char& num = temp -> val;
    return num;
}