#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
using namespace std;
void wIn(string words[], int size) {
    string line;
    ifstream file ("words_in.txt");
    for (int i = 0; i < size; i++) {
        getline(file, line);
        words[i] = line;
    }  
    file.close();
}
void wOut(string words[], int size) {
    string line;
    ofstream file ("words_out.txt");
    for (int i = 0; i < size; i++) {
        line = words[i];
        file << line << '\n';
    }
    file.close();
}

int main() {
    int size = wordCount();
    cout << size;
    string * words;
    words = new string[size];
    wIn(words, size);
    wOut(words, size);
    delete[] words;
}