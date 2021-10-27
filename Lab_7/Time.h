#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time();
        Time(int x, int y, int z);
        int Hours();
        int Minutes();
        int Seconds();
        int setHours(int newHours);
        int setMinutes(int newMinutes);
        int setSeconds(int newSeconds);
        ~Time();
};

#endif