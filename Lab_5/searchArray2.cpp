#include <iostream>
#include <fstream>
#include <string>
#include "functions.h"

using namespace std;
int binarySearchR(string A[], int min, int size, string key, int status) {
    if (status == -1) {
        for (int i = 0; i < size; i++) {
            int mid = min + (size - min)/2;
            if (A[mid] == key) {
                return mid;
            }
            if (A[mid] < key) {
                size = mid - 1;
            }
            if (A[mid] > key) {
                min = mid + 1;
            }
        }
    }
    if (status == 1) {
        for (int i = 0; i < size; i++) {
            int mid = min + (size - min)/2;
            if (A[mid] == key) {
                return mid;
            }
            if (A[mid] < key) {
                min = mid + 1;
            }
            if (A[mid] > key) {
                size = mid - 1;
            }
        }
    }
    return -1;
}
int main () {
    int array_size = wordCount();
    string key;
    string * A;
    A = new string[array_size];
    wordsIn(A,array_size);
    checkArraySort(A,array_size);
    cout << "Input search key k: ";
    cin >> key;
    int index = binarySearchR(A, 0, array_size-1, key, checkArraySort(A,array_size));
    if ( index == -1) {
        cout << "The key k was not found in the array!" << endl;
    }
    else {
        cout << "found key k at index " << index << endl;
    }
    delete [] A;
    
}