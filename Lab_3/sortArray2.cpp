#include <iostream>
#include <string>
using namespace std;
int main() {
    int size, Min, temp;
    int count = 0;
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
    // Selection sort by using minimum to traverse the array
    for (int i = 0; i < size-1; i++) {
        Min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[Min] < arr[j]) {
                Min = j;
                count ++;
            }
        }
            // swapping the smallest value in the array with the current indexed value.
            temp = arr[Min];
            arr[Min] = arr[i];
            arr[i] = temp;
    }
    //print the array
    cout << "This is the sorted array in descending order: " << endl;
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i] << " ";
    }
    cout << "" << endl;
    cout << "The algorithm selected the minimum for the traverse of the array." << endl;
    cout << "it took " << count << " swaps to sort the array..." << endl;
}