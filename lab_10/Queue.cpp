#include <iostream>
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

Queue::Queue():LinkedList() {

}
Queue::~Queue() {

}

void Queue:: enqueue(int val) {
insertAtBack(val);
}

int Queue:: dequeue() {
    if (isEmpty() == 1) {
        return 1;
    }
    Node* temp = first;
    int num = temp -> val;
    removeFromFront();
    return num;
}

int& Queue:: front() {

    Node* temp = first;
    int& num = temp -> val;
    return num;
}