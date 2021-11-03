#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Time{
    int hour;
    int minute;
    int second;
} temp, start, finish; 

bool getTimeFromUser(Time &temp, string usrTime) {

string usrHour = usrTime.substr(0,2);
string usrMinute = usrTime.substr(3,2);
string usrSecond = usrTime.substr(6,7);

int numHour = atoi(usrHour.c_str());
int numMinute = atoi(usrMinute.c_str());
int numSecond = atoi(usrSecond.c_str());

if (numHour < 0 || numHour > 24) {
    return false;
}
if (numMinute < 0 || numMinute > 60) {
    return false; 
}
if (numSecond < 0 || numSecond > 60) {
    return false;
}
temp.hour = numHour;
temp.minute = numMinute;
temp.second = numSecond;
return true;
}

void print24Hour(Time start, Time finish){
    cout << "The lecture starts at ";
    if (start.hour < 10) {
        cout << setfill('0') << setw(2);
        cout << start.hour << ":";
    }
    else {
        cout << start.hour << ":";
    }
    if (start.minute < 10) {
        cout << setfill('0') << setw(2);
        cout << start.minute << ":";
    } 
    else {
        cout << start.minute << ":";
    }
    if (start.second < 10) {
        cout << setfill('0') << setw(2);
        cout << start.second;
    }
    else {
        cout << start.second << ":";
    }
    cout << " and finishes at ";
    if (finish.hour < 10) {
        cout << setfill('0') << setw(2);
        cout << finish.hour << ":";
    }
    else {
        cout << finish.hour << ":";
    }
    if (finish.minute < 10) {   
        cout << setfill('0') << setw(2);
        cout << finish.minute << ":";
    }
    else {
        cout << finish.minute << ":";
    }
    if (finish.second < 10) {
        cout << setfill('0') << setw(2);
        cout << finish.second << endl;
    }
    else {
        cout << finish.second << endl;
    }
}

int main(){
    bool status;

    string usrTime;
    cout << "Please Enter Start Time: ";
    getline(cin,usrTime);

    status = getTimeFromUser(temp, usrTime);

    if (status == false){
        cout << "ERROR, INCORRECT Time!!!" << endl;
        return 0;
    }
    start = temp;

    cout << "Please Enter Finish Time: ";
    getline(cin,usrTime);

    status = getTimeFromUser(temp, usrTime);

    if (status == false){
        cout << "ERROR, INCORRECT Time!!!" << endl;
        return 0;
    }
    finish = temp;

    print24Hour(start,finish);
    return 0;
}