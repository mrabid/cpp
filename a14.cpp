#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
 char A;
 cin>> A;
 if (A>=33 && A<=47)
 {
 cout << "Symbol"<< endl;
 }
 else if (A>=58 && A<=64)
 {
 cout << "Symbol"<< endl;
 }
 else if (A>=48 && A<=57)
 {
 cout << "Digit"<< endl;
 }
 else if (A>=65 && A<=90)
 {
 cout << "Uppercase letter"<< endl;
 }
 else if (A>=97 && A<=122)
 {
 cout << "Lowercase letter"<< endl;
 }
 return 0;
}