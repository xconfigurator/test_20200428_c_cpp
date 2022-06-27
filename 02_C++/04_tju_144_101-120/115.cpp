/**
 * @file 115.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class Time {
public:
    Time(int newhours, int newminutes) {
        hours = newhours;
        minutes = newminutes;
    }
    friend void Time12(Time time);
    friend void Time24(Time time);
    int hours, minutes;
};

void Time12(Time time) {
    if (time.hours > 12) {
        time.hours -= 12;
        cout << time.hours << ":" << time.minutes << "PM" << endl;
    } else {
        cout << time.hours << ":" << time.minutes << "AM" << endl;
    }
}

void Time24(Time time) {
    cout << time.hours << ":" << time.minutes << endl;
}

int main(int argc, char const *argv[]) {
    Time Time1(12, 25), Time2(10, 35);// Time1(13, 25);
    Time12(Time1);
    Time12(Time2);
    Time24(Time1);
    Time24(Time2);
    return 0;
}
