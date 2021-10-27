#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Time.h"
using namespace std;


bool getTimeFromUser(Time &temp, string usrTime) {
string usrHours = usrTime.substr(0,2);
string usrMinutes = usrTime.substr(3,2);
string usrSeconds = usrTime.substr(6,7);

int numHours = atoi(usrHours.c_str());
int numMinutes = atoi(usrMinutes.c_str());
int numSeconds = atoi(usrSeconds.c_str());

if (numHours < 0 || numHours > 24) {
    return false;
}
if (numMinutes < 0 || numMinutes > 60) {
    return false; 
}
if (numSeconds < 0 || numSeconds > 60) {
    return false;
}
temp.setHours(numHours);
temp.setMinutes(numMinutes);
temp.setSeconds(numSeconds);
return true;
}

void print24hour (Time start, Time end) {
    cout << "The lecture starts at " ;
    if (start.Hours() < 10) {
        cout << setfill('0') << setw(2);
        cout << start.Hours() << ":";
    }
    else {
        cout << start.Hours() << ":";
    }
    if (start.Hours() < 10) {
        cout << setfill('0') << setw(2);
        cout << start.Minutes() << ":";
    } 
    else {
        cout << start.Minutes() << ":";
    }
    if (start.Seconds() < 10) {
        cout << setfill('0') << setw(2);
        cout << start.Seconds();
    }
    else {
        cout << start.Seconds() << ":";
    }
    cout << " and ends at ";
    if (end.Hours() < 10) {
        cout << setfill('0') << setw(2);
        cout << end.Hours() << ":";
    }
    else {
        cout << end.Hours() << ":";
    }
    if (end.Minutes() < 10) {   
        cout << setfill('0') << setw(2);
        cout << end.Minutes() << ":";
    }
    else {
        cout << end.Minutes() << ":";
    }
    if (end.Seconds() < 10) {
        cout << setfill('0') << setw(2);
        cout << end.Seconds() << endl;
    }
    else {
        cout << end.Seconds() << endl;
    }
}


int main() {
Time temp, start, end;
bool status;
string usrTime;
cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
getline(cin, usrTime);
status = getTimeFromUser(temp, usrTime);
if (status == false) {
    cout << "The start time is invalid." << endl;
    exit(0);
}
start = temp;
cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
getline(cin, usrTime);
status = getTimeFromUser(temp, usrTime);
if (status == false) {
    cout << "The end time is invalid." << endl;
    exit(0);
}
end = temp;
print24hour(start, end);
}
