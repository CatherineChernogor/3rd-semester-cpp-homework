//
// Created by Stephanie on 22.11.2019.
//

#ifndef TIME_TIME_H
#define TIME_TIME_H
#include <iostream>

using namespace std;

class TimeException {

};

class Time {
public:
    int hour;
    int mins;
    double sec;

    Time();
    Time(int hh, int mm, double ss);
    Time c(const Time&);

    Time& operator +=(const Time& t);
    Time operator +(const Time& t) const;
    Time operator -() const;
    Time& operator -=(const Time& t);
    Time operator -(const Time& t) const;

    friend istream& operator >>(istream& in, Time& t);
    friend ostream& operator <<(ostream& out, const Time& t);
};

#endif //TIME_TIME_H
