#include <iostream>
#include <fstream>
#include <string>
#include "functions.h"

using namespace std;

int main () {
    int array_size = wordCount();
    string * A;
    A = new string[array_size];
    wordsIn(A,array_size);
    cout << checkArraySort(A,array_size);
    delete [] A;
}

