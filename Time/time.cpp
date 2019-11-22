//
// Created by Stephanie on 22.11.2019.
//
#include "time.h"
#include <iostream>
#include <iomanip>
using namespace std;

Time::Time() {
     hours = 0;
     mins =0;
     secs = 0;

}
Time::Time(int hh, int mm, double ss ) {
     hours = hh;
     mins =mm;
     secs = ss;
}


Time& Time::operator +=(const Time& t) {

    int delta;
    if ( secs + t.secs <60)
        secs = secs + t.secs;
    else {
        delta = (secs + t.secs) / 60;
        mins += delta;
        secs += secs + t.secs - delta + 60;
    }

    if ( mins + t.mins <60)
        mins = mins + t.mins;
    else {
        delta = (mins + t.mins) / 60;
        hours += delta;
        mins += mins + t.mins - delta + 60;
    }
    hours = hours + t.hours;
    return *this;

}
Time Time::operator +(const Time &t) const {

    Time res(*this);
    return res += t;
}

Time Time::operator -() const {
    Time t(-hours, -mins, -secs);
    return t;
}
Time& Time::operator -=(const Time& t) {
    return (*this += (-t));

}
Time Time::operator -(const Time& t) const{
    Time res(*this);
    return res -= t;
}
istream& operator >>(istream& in, Time& t) {
    in >> t.hours >> t.mins >> t.secs;
    return in;
}
ostream& operator <<(ostream& out, const Time& t) {
    out << setfill('0') << setw(2) << t.hours << ":" << t.mins<<":";
    out<<setprecision(5) <<t.secs<<endl;
    //out << t.hours << ":" << t.mins<<":"<<t.secs<<endl;

    return out;
}