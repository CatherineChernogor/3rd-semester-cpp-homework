
#include <iostream>
#include "rational.h"

using namespace std;

void solve_equation(Rational a, Rational b, Rational c);
int main()
{
    int a1, a2;

    while (true){
        cout <<endl<< "enter first rational number" << endl;
        cin >> a1 >> a2;
        Rational a(a1, a2);

        //cout<<a.rsqrt()<<endl;

        cout << "enter second rational number" << endl;
        cin >> a1 >> a2;
        Rational b(a1, a2);

        //cout<<b.rsqrt()<<endl;


        cout << "enter third rational number" << endl;
        cin >> a1 >> a2;
        Rational c(a1, a2);

        //cout<<c.rsqrt()<<endl;


        solve_equation(a, b, c);
    }

}

void solve_equation(Rational a, Rational b, Rational c){

    Rational D = b*b-Rational(4)*a*c;

    if (D>Rational(0)){
        cout<<"first "<<(-b+D.rsqrt())/(Rational(2)*a)<<endl;
        cout<<"second "<<(-b-D.rsqrt())/(Rational(2)*a)<<endl;

    }else if (D==Rational(0)){
        cout<< -b/(Rational(2)*a);

    } else {
        cout<<"That's complex number";
    }
    cout<<endl;
}
