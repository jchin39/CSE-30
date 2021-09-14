#include <iostream>
#include <string>
using namespace std;
int main() {
    int key = 5;
    int guess;
    int typo = 4;
    int guess2;
    cout << "Enter the number of lines for the punishment: " << endl;
    cin >> guess;
    if ( guess == key) {
        cout << "Enter the line for which we want to make a typo: " << endl;
        cin >> guess2;
        if (typo != guess2) {
            cout << "You entered an incorrect value for the line typo" << endl;
            exit(0);
        }
        
        for (int i = 1; i < key; i ++){
             if (i == typo) {
                cout << "I will alwys use object oriented progrming. ";
            }
            cout << "I will always use object oriented programming. "; 
        }
    }
    else {
        cout << "You entered an incorrect value for the number of lines!";
    }
}