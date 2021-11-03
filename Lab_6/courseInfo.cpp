#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

struct Time{
    int hour;
    int minute;
    int second;
};

struct Course{
    int name;
    int credits;
    bool majorRequirement;
    double avgGrade;
    string days;
    Time startTime;
    Time finishTime;   
};

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
    bool sPm = false;
    bool fPm = false;

    if (start.hour > 12){
        start.hour = start.hour - 12;
        sPm = true;
    }
    if (finish.hour > 12){
        finish.hour = finish.hour - 12;
        fPm = true;
    }
    if (start.hour < 10){
        cout << setfill('0') << setw(2);
        cout << start.hour << ":";
    }
    else{
        cout << start.hour << ":";
    }
    if (start.minute < 10){
        cout << setfill('0') << setw(2);
        cout << start.minute << ":";
    } 
    else{
        cout << start.minute << ":";
    }
    if (start.second < 10){
        cout << setfill('0') << setw(2);
        cout << start.second;
    }
    else{
        cout << start.second;
    }
    if (sPm == true){
        cout << "pm";
    }
    else{
        cout << "am";
    }
    cout << " - ";
    if (finish.hour < 10){
        cout << setfill('0') << setw(2);
        cout << finish.hour << ":";
    }
    else{
        cout << finish.hour << ":";
    }
    if (finish.minute < 10){   
        cout << setfill('0') << setw(2);
        cout << finish.minute << ":";
    }
    else{
        cout << finish.minute << ":";
    }
    if (finish.second < 10){
        cout << setfill('0') << setw(2);
        cout << finish.second;
    }
    else{
        cout << finish.second;
    }
    if (fPm == true){
        cout << "pm" << endl;
    }
    else{
        cout << "am" << endl;
    }
}

int main(){
    int counter = 0;
    string* arr;
    string line;
    bool status;

    ifstream input;

    input.open("in.txt");
    
    if(input.is_open()){
        while(!input.eof()){
            getline(input,line);
            counter++;
        }
    }

    input.close();

    arr = new string[counter];

    input.open("in.txt");

    if(input.is_open()){
        for (int j = 0;j < counter; j++){
            getline(input,line);
            arr[j] = line;
        }
    }

    input.close();

    if (counter == 0){
        cout << "ERROR, THERE IS NO DATA IN THE IN.TXT FILE!!!" << endl;
        return 0;
    }

    int courseNum = atoi(arr[0].c_str());
    
    if (counter != courseNum*7 + 1){
        return 0;
    }

    cout << "=========================" << endl << "SCHEDULE OF STUDENT" << endl << "=========================" << endl;

    for (int i = 0; i < courseNum; i++){
        cout << "COURSE " << i + 1 << ": " << arr[i * 7 + 1] << endl;

        if (atoi(arr[i * 7 + 3].c_str())){
            cout << "NOTE: This course is a major requirement..." << endl;
        }
        else{
            cout << "NOTE: This course is NOT a major requirement..." << endl;
        }

        cout << "Number of Credits: " << arr[i * 7 + 2] << endl;

        cout << "Lecture Day(s): " << arr[i * 7 + 5] << endl;

        Time start;
        Time finish;
        cout << "Lecture Times: ";
        
        if (getTimeFromUser(start,arr[i * 7 + 6]) && getTimeFromUser(finish,arr[i * 7 + 7])){
            print24Hour(start,finish);
        }
        else{
            cout << "ERROR, INVALID TIME!!!" << endl;
        }

        cout << "Stat: on average student gets " << atof(arr[i * 7 + 4].c_str()) << "% in this course." << endl;
        cout << "=================================================="<< endl;
    }

    return 0;
}