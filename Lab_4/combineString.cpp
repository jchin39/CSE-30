#include <iostream>
#include <string>

using namespace std;
void combineStr(string s, int num) {
    string newString[num];
    cout << "The resulting string is: ";
    for (int i = 0; i < num; i ++) {
        newString[i] = s;
        cout << newString[i];
    }
}
int main() {
    int count;
    string word;
    cout << "Enter a string: ";
    cin >> word;
    cout << "Enter a number of times: ";
    cin >> count;
    if (count == 0) {
        exit(0);
    }
    combineStr(word, count);
}
