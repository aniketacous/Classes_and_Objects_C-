#include "fraction.h"
#include<iostream> 

using namespace std;


int main()
{
Fraction a, b;
a = Fraction(4,6);
b = Fraction(2,8);
a.print();
(a+b).print();
(a-b).print();
(a*b).print();
(a/b).print();
cout << (a==b) << endl;
cout << (a!=b) << endl;
cout << (a<b) << endl;
cout << (a>b) << endl;
cout << (a<=b) << endl;
cout << (a>=b) << endl;



return 0;
}
