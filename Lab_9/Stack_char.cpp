#include <iostream>
#include "Stack_char.h"

using namespace std;

Stack::Stack() {

}
Stack::~Stack() {

}
void Stack::push(char val) {
    insertAtBack(val);
}
void Stack::pop() {
    removeFromBack();
}
char& Stack::top () {
    size();
    return topv;
}