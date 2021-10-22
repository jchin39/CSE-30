#ifndef LAB6FUNCTIONS_H
#define LAB6FUNCTIONS_H

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
struct Course {

    string name;
    int credits;
    bool majorRequirement;
    double avgGrade;
    string days;
    Time startTime;
    Time endTime;

};
void getTimeFromUser(Time &temp, string usrTime) {
string usrHours = usrTime.substr(0,2);
string usrMinutes = usrTime.substr(3,2);
string usrSeconds = usrTime.substr(6,7);

int numHours = atoi(usrHours.c_str());
int numMinutes = atoi(usrMinutes.c_str());
int numSeconds = atoi(usrSeconds.c_str());

temp.hours = numHours;
temp.minutes = numMinutes;
temp.seconds = numSeconds;
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
int wordCount()
{
    int count = 0;
    string line;
    ifstream file("in.txt");
    while (getline(file, line))
    {
        count++;
    }
    file.close();
    return count;
}
void wordsIn(string words[], int size)
{
    string line;
    ifstream file("in.txt");
    for (int i = 0; i < size; i++)
    {
        
        getline(file, line);
        words[i] = line;
    }
    file.close();
}
void courseIn(string words[], int size)
{
    string line;
    ifstream file("in.txt");
    for (int i = 0; i < size; i++)
    {
        getline(file, line);
        words[i] = line;
    }
    file.close();
}
void courseMake(string words[], int size, Course &c) {
    for (int i = 0;i < size; i++) {
        if (i == 0) {
            c.name = words[i];
            cout << c.name << endl;
        }
        if (i == 1) {
            int creditss = atoi(words[i].c_str());
            c.credits = creditss;
            cout << c.credits << endl;
        }
        if (i == 2) {
            int mReq = atoi(words[i].c_str());
            c.majorRequirement = mReq;
            cout << c.majorRequirement << endl;
        }
        if (i == 3) {
            float avgG = atof(words[i].c_str());
            c.avgGrade = avgG;
            cout << c.avgGrade << endl;
        }
        if (i == 4) {
            c.days = words[i];
            cout << c.days << endl;
        }
    }
}
#endif