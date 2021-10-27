#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}
Time::Time(int x, int y, int z) {
    hours = x;
    minutes = y;
    seconds = z;
}
int Time::Hours() {
    return hours;
}
int Time::Minutes() {
    return minutes;
}
int Time::Seconds() {
    return seconds;
}
int Time::setHours(int newHours) {
    hours = newHours;
    return hours;
}
int Time::setMinutes(int newMinutes) {
    minutes = newMinutes;
    return minutes;
}
int Time::setSeconds(int newSeconds) {
    seconds = newSeconds;
    return seconds;
}
Time::~Time() {
    
}