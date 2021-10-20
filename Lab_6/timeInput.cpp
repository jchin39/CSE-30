#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

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
temp.hours = numHours;
temp.minutes = numMinutes;
temp.seconds = numSeconds;
return true;
}

void print24hour (Time start, Time end) {
    cout << "The lecture starts at " ;
    if (start.hours < 10) {
        cout << setfill('0') << setw(2);
        cout << start.hours << ":";
    }
    else {
        cout << start.hours << ":";
    }
    if (start.hours < 10) {
        cout << setfill('0') << setw(2);
        cout << start.minutes << ":";
    } 
    else {
        cout << start.minutes << ":";
    }
    if (start.seconds < 10) {
        cout << setfill('0') << setw(2);
        cout << start.seconds;
    }
    else {
        cout << start.seconds << ":";
    }
    cout << " and ends at ";
    if (end.hours < 10) {
        cout << setfill('0') << setw(2);
        cout << end.hours << ":";
    }
    else {
        cout << end.hours << ":";
    }
    if (end.minutes < 10) {   
        cout << setfill('0') << setw(2);
        cout << end.minutes << ":";
    }
    else {
        cout << end.minutes << ":";
    }
    if (end.seconds < 10) {
        cout << setfill('0') << setw(2);
        cout << end.seconds << endl;
    }
    else {
        cout << end.seconds << endl;
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
    cout << "Not a time." << endl;
    exit(0);
}
start = temp;
cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
getline(cin, usrTime);
status = getTimeFromUser(temp, usrTime);
if (status == false) {
    cout << "Not a time." << endl;
    exit(0);
}
end = temp;
print24hour(start, end);
}
