#pragma once
#include <iostream>
using namespace std;

class Time{
    public:
        Time();
        Time(int, int, int);
        friend ostream& operator << (ostream &out, Time&t);

    private:
        int hours, minutes, seconds;

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
}

ostream& operator << (ostream &out, Time&t) {
    out << t.hours << ": ";
    out << t.minutes << ": ";
    out << t.seconds << endl;

    return out;
}
