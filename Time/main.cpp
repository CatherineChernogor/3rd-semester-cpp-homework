#include <iostream>
#include "time.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    Time time1(12,23,34.534985876854657);
    Time time2(2,53,50);
    cout<<"time1 "<<time1;
    cout<<"time2 "<<time2;

    cout<<"sum "<<time1+time2<<endl;
    cout<<"min "<<time1-time2<<endl;

    return 0;
}