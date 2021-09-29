#include <iostream>
#include <string>
using namespace std;
int main() {
    int size, Max, temp;
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
    //selection sort by using maximium to traverse the array.
    for (int i = size -1; i >= 0; i--) {
        Max = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[Max]) {
                Max = j;
            }
        }
            //swapping maximum with current indexed value
            temp = arr[Max];
            arr[Max] = arr[i];
            arr[i] = temp;
    }
    //print the array
    cout << "This is the sorted array in ascending order: " << endl;
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i] << " ";
    }
    cout << "" << endl;
    cout << "The algorithm selected the maximum for the traverse of the array." << endl;
}