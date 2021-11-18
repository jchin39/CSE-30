#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {

}
Stack::~Stack() {

}
void Stack::push(int val) {
    insertAtFront(val);
}
void Stack::pop() {
    removeFromFront();
}
void Stack::top () {
    isEmpty();
}