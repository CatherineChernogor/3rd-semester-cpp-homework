//
// Created by Stephanie on 22.11.2019.
//
#include "time.h"
#include <iostream>
#include <iomanip>
using namespace std;

Time::Time() {
     hour = 0;
     mins =0;
     sec = 0.0;

}
Time::Time(int hh, int mm, double ss ) {
     hour = hh;
     mins =mm;
     sec = ss;
}


Time& Time::operator +=(const Time& t) {

    int delta;
    if ( sec + t.sec <60)
        sec = sec + t.sec;
    else {
        delta = (sec + t.sec) / 60;
        mins += delta;
        sec += t.sec - delta * 60;
    }

    if ( mins + t.mins <60)
        mins = mins + t.mins;
    else {
        delta = (mins + t.mins) / 60;
        hour += delta;
        mins += t.mins - delta * 60;
    }
    hour = hour + t.hour;
    return *this;

}
Time Time::operator +(const Time &t) const {

    Time res(*this);
    return res += t;
}

Time Time::operator -() const {
    Time t(-hour, -mins, -sec);
    return t;
}
Time& Time::operator -=(const Time& t) {

    if ( sec - t.sec >= 0)
        sec = sec - t.sec;
    else {
        mins--;
        sec = sec + 60 - t.sec;
    }

    if ( mins - t.mins >= 0)
        mins = mins - t.mins;
    else {
        hour--;
        mins = mins + 60 - t.mins;
    }

    if ( hour - t.hour >= 0)
        hour = hour - t.hour;
    else throw TimeException();
    return *this;

}
Time Time::operator -(const Time& t) const{
    Time res(*this);
    return res -= t;
}
istream& operator >>(istream& in, Time& t) {
    in >> t.hour >> t.mins >> t.sec;
    return in;
}
ostream& operator <<(ostream& out, const Time& t) {
    out << setfill('0') << setw(2) << t.hour << ":"<<setfill('0') << setw(2) << t.mins<<":";
    out<<setfill('0') << setw(2)<<setprecision(5) <<t.sec<<endl;
    //out << t.hour << ":" << t.mins<<":"<<t.sec<<endl;

    return out;
}