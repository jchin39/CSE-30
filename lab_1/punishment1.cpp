#include <iostream>
#include <string>
using namespace std;
int main() {
    int key = 5;
    int guess;
    cout << "Enter the number of lines for the punishment: " << endl;
    cin >> guess;
    if ( guess == key) {
        for (int i = 0; i < key; i ++){
            cout << "I will always use object oriented programming. "; 
        }
    }
    else {
        cout << "You entered an incorrect value for the number of lines!";
    }
}