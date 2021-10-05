#include <iostream>
#include <string>
using namespace std;
void sortArr(bool stat, int arr[], int size) {   
    //ascending
    if (stat == 1) {
        int saved, j;
        for (int i = 1; i < size; i++) {
            saved = arr[i];
            j = i;
            while (j > 0 && arr[j-1] > saved) {
                arr[j] = arr[j-1];
                j = j-1;
            }
            arr[j] = saved;
        }
        cout << "This is the sorted array in ascending order: " << endl;
        for (int i = 0; i < size; i++) {
            cout << " " << arr[i] << " ";
        }
    }
    //descending
    else {
        int saved, j;
        for (int i = 1; i < size; i++) {
            saved = arr[i];
            j = i;
            while (j > 0 && arr[j-1] < saved) {
                arr[j] = arr[j-1];
                j = j-1;
            }
            arr[j] = saved;
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
    cout << "Sort in ascending (1) or descending (0) order? ";
    cin >> order;
    sortArr(order, arr, size);
    //print the array

}
