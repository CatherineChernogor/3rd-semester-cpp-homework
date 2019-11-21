
#include <iostream>
#include "rational.h"

using namespace std;

int main()
{

    int a1, a2;
    char str;

    while (true){
        cout <<endl<< "enter first rational number" << endl;
        cin >> a1 >> a2;
        Rational a(a1, a2);

        cout <<endl<< "enter operation" << endl;
        cin >> str;

        cout << "enter second rational number" << endl;
        cin >> a1 >> a2;
        Rational b(a1, a2);


        if (a1 == 0 and a2 == 0)
            break;


        if (str == '+')
            cout << "a=" << a << " b=" << b << endl<< "a+b=" << a + b << endl;
        if (str == '-')
            cout << "a=" << a << " b=" << b << endl<< "a-b=" << a - b << endl;
        if (str == '*')
            cout << "a=" << a << " b=" << b << endl<< "a*b=" << a * b << endl;
        if (str == '/')
            cout << "a=" << a << " b=" << b << endl<< "a/b=" << a / b << endl;
        if (str == '>') {
            cout << "a=" << a << " b=" << b << endl<< "a>b ";
            a > b ? cout << 'y' : cout << 'n';
            cout << endl;
        }
        if (str == '<') {
            cout << "a=" << a << " b=" << b << endl<< "a<b ";
            a < b ? cout << 'y' : cout << 'n';
            cout << endl;
        }
        if (str == 's'){
            cout << "a=" << a << " b=" << b << endl<< "sqrt=" <<a.rsqrt() << endl;

        }

    }

}
