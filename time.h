#pragma once
#include <iostream>
using namespace std;

class Time{
    public:
        Time();
        Time(int, int, int);
        Time operator + (Time);
        Time operator += (int);
        friend ostream& operator << (ostream &out, Time&t);

    private:
        int hours, minutes, seconds;
        void adjustTime();

};

Time::Time() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
    adjustTime();
}

void Time::adjustTime() {
    if(seconds >= 60) {
        int addMinutes = seconds / 60;
        minutes += addMinutes;
        seconds -= addMinutes * 60;
    }
    if(minutes >= 60) {
        int addHours = minutes / 60;
        hours += addHours;
        minutes -= addHours * 60;
    }
}

Time Time::operator + (Time t) {
    int s = seconds + t.seconds;
    int m = minutes + t.minutes;
    int h = hours + t.hours;
    
    Time newTime(h, m, s);
    return newTime;
}

Time Time::operator += (int s) {
    seconds += s;
    adjustTime();
    return *this;
}

ostream& operator << (ostream &out, Time&t) {
    if (t.hours < 10) out << "0";
    out << t.hours << ": ";
    if (t.minutes < 10) out << "0";
    out << t.minutes << ": ";
    if (t.seconds < 10) out << "0";
    out << t.seconds << endl;

    return out;
}
