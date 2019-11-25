#include <iostream>
#include "time.h"
using namespace std;

Time inputTime();
int main() {
    std::cout << "Hello, World!" << std::endl;

    Time time1=inputTime();
    Time time2=inputTime();

    cout<<"time1 "<<time1;
    cout<<"time2 "<<time2;

    cout<<endl;
    cout<<"sum "<<time1+time2;
    cout<<"min "<<time1-time2;

    return 0;
}
Time inputTime() {

    cout<<"Enter date"<<endl;
    int t[2];
    double sec;

    for (int i = 0; i < 2; i++) {
        cin >> t[i];
        if (t[i] >= 60) throw TimeException();
    }
    cin >> sec;
    if (sec >= 60) throw TimeException();

    Time time(t[0], t[1], sec);
    return time;
}