#include <iostream>
#include <string>
using namespace std;
int main() {
    int size, v, index;
    bool found = false;
    int x = 0;
    cout << "Enter the size of your array: ";
    cin >> size;
    int arr[size] = {0};
    //Setting acceptable array size from anywhere between 1 and 10
    if (size <= 0 || size > 10) {
        cout << "ERROR: you entered an incorrect value for the array size!";
        exit(0);
    }
    //funnel in the values one by one to the array. if a cin only reads the first value then it needs to input them one by one.
    cout << "Enter the numbers in the array, separated by a space, and press enter: ";
    for ( int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    //Getting Key and Checking for it.
    cout << "Enter a number to search for in the array: ";
    cin >> v;
    for (int i = 0; i < size; i++) {
        x++;
        if ( arr[i] == v) {
            index = i;
            found = true;
            break;
        }
    }
    //If key is not found
    if (found == false) {
        cout << "The value v was not found in the array!" << endl;
        exit(0);
    }
    //Best case
    if (x == 1) {
        cout << "Found value " << v <<" at index " << index << " which took " << x << " checks." << endl;
        cout << "We ran into the best case scenario!" << endl;
        exit(0);
    }
    //Worst Case
    else if (x == size) {
        cout << "Found value " << v <<" at index " << index << " which took " << x << " checks." << endl;
        cout << "We ran into the worst case scenario!" << endl;
        exit(0);
    }
    //Mediocre case
    else {
        cout << "Found value " << v <<" at index " << index << " which took " << x << " checks." << endl;
    }
}