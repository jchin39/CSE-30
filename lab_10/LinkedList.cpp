#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() {
first = NULL;
last = NULL;
}

void LinkedList::insertAtBack(int num) {
    Node* newNode = new Node();
    newNode -> val = num;
    newNode -> next = NULL;
    if (first == NULL) {
        first = newNode;
    }
    else {
        Node*temp = first;
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}
bool LinkedList::removeFromBack() {
if (first != NULL ) {
    if (first -> next == NULL) {
        first = NULL;
        return 1;
    }
    else {
        Node* newNode = new Node();
        newNode = first;
        while(newNode->next->next != NULL) {
            newNode = newNode -> next;
        }
        newNode -> next = NULL;
        delete (newNode -> next);
        return 1;
    }
    }
    return 0;
}
void LinkedList::print() {
    Node*temp = first;
    while (temp != NULL) {
        if (temp -> next == NULL) {
            cout << temp -> val;
            break;
        }
        cout << temp -> val << ',';
        temp = temp -> next;
    }
}
bool LinkedList::isEmpty() {
    if (first == NULL && last == NULL) {
    return 1;
    }
    else {
    return 0;
    }
}
int LinkedList::size() {
    Node* newNode = new Node();
    newNode = first;
    int count = 0;
    while (newNode != NULL) {
        count ++;
        newNode = newNode -> next;
    }
return  count;
}
void LinkedList::insertAtFront(int num) {
    Node* newNode = new Node();
    newNode -> val = num;
    newNode -> next = first;
    first = newNode;
}
void LinkedList::clear() {

    while(first != NULL) {
    Node* newNode = new Node();
    newNode = first;
    first = first -> next;
    delete(newNode);
    }
}
bool LinkedList::removeFromFront() {
    if (first != NULL) {
        Node* newNode = new Node();
        newNode = first;
        first = first -> next;
        delete(newNode);
        return 1;
    }
return 0;
}
LinkedList::~LinkedList() {
    while(first != NULL) {
    Node* newNode = new Node();
    newNode = first;
    first = first -> next;
    delete(newNode);
    }
}