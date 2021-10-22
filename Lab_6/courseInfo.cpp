#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "lab6functions.h"
using namespace std;

int main() {
Time temp;
Course c;
bool status;
string usrTime;
int size = wordCount();
string * words;
words = new string[size];
courseIn(words, size);
courseMake(words, size, c);
getTimeFromUser(temp, usrTime);
c.startTime = temp;
getTimeFromUser(temp, usrTime);
c.endTime = temp;
print24hour(c.startTime, c.endTime);
}