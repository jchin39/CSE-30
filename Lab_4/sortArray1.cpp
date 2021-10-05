#include <iostream>
#include <string>
using namespace std;
void sortArr(bool stat, int arr[], int size) {   
    if (stat == 1) {
        for (int i = size -1; i >= 0; i--) {
            int Max = i;
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[Max]) {
                    Max = j;
                }
            }
                //swapping maximum with current indexed value
                int temp = arr[Max];
                arr[Max] = arr[i];
                arr[i] = temp;
        }
        cout << "This is the sorted array in ascending order: " << endl;
        for (int i = 0; i < size; i++) {
            cout << " " << arr[i] << " ";
        }
    }
    else {
         for (int i = 0; i < size-1; i++) {
        int Min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[Min] < arr[j]) {
                Min = j;
            }
        }
            // swapping the smallest value in the array with the current indexed value.
            int temp = arr[Min];
            arr[Min] = arr[i];
            arr[i] = temp;
    }
        //print the array
        cout << "This is the sorted array in descending order: " << endl;
        for (int i = 0; i < size; i++) {
            cout << " " << arr[i] << " ";
        }
    }
}
    

int main() {
    int size;
    bool order;
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
    //Select ascending or descending
    cout << "Sort in ascending (0) or descending (1) order? ";
    cin >> order;
    sortArr(order, arr, size);
    //print the array

}
