#include <iostream>
#include "LinkedList_char.h"
using namespace std;

LinkedList::LinkedList() {
first = NULL;
last = NULL;
topv = 0;
}

void LinkedList::insertAtBack(char num) {
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
char popVal;
if (first != NULL ) {
    if (first -> next == NULL) {
        first = NULL;
        return 1;
    }
    else {
        Node* newNode = new Node();
        newNode = first;
        popVal = newNode -> next -> val;
        while(newNode->next->next != NULL) {
            newNode = newNode -> next;
            popVal = newNode -> next -> val;
        }   
        newNode -> next = NULL;
        delete (newNode -> next);
        cout << popVal;
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
        cout << temp -> val << ", ";
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
        topv = newNode -> val;
        newNode = newNode -> next;
    }    
return  count;
}
void LinkedList::insertAtFront(char num) {
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
        char firstVal = first -> val;
        delete(newNode);
        cout << firstVal << endl;
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