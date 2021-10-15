#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int wordCount()
{
    int count = 0;
    string line;
    ifstream file("words_in.txt");
    while (getline(file, line))
    {
        count++;
    }
    file.close();
    return count;
}
void wordsIn(string words[], int size)
{
    string line;
    ifstream file("words_in.txt");
    for (int i = 0; i < size; i++)
    {
        getline(file, line);
        words[i] = line;
    }
    file.close();
}
void wordsOut(string words[], int size)
{
    string line;
    ofstream file("words_out.txt");
    for (int i = 0; i < size; i++)
    {
        line = words[i];
        file << line << '\n';
    }
    file.close();
}
int sortDesc(string words[], int size)
{
    //descending
    string saved;
    int j;
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        saved = words[i];
        j = i;
        while (j > 0 && words[j - 1] > saved)
        {
            words[j] = words[j - 1];
            j = j - 1;
            count++;
        }
        words[j] = saved;
    }
    cout << "This is the sorted array in Descending order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << words[i] << " ";
    }
    return count;
}
void sortAsc(string words[], int size)
{
    //ascending
    string saved;
    int j;
    for (int i = 1; i < size; i++)
    {
        saved = words[i];
        j = i;
        while (j > 0 && words[j - 1] < saved)
        {
            words[j] = words[j - 1];
            j = j - 1;
        }
        words[j] = saved;
    }
    //print the array
    cout << "This is the sorted array in Ascending order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << words[i] << " ";
    }
}
int checkArraySort(string A[], int array_size) {
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < array_size-1; i++) {
       if (A[i] < A[i+1]) {
           count++;
       }
       if (A[i] > A[i+1]) {
           count2++;
       }
    }
    if (count == array_size-1) {
        return 1;
    }
    if (count2 == array_size-1) {
        return -1;
    }
    else {
    cout << "Not sorted!" << endl;
    exit(0);
    }
}

#endif