#include<iostream>
using namespace std;
int main ()
{
 int num;
 cin>> num;
 if (num<0)
 {
 cout << " the number is Negative"<< endl;
 }
 else if (num>0)
 {
 cout << " The number is Positive"<< endl;
 }
 else 
 {
 cout << "Neither positive or negative"<< endl;
 }
 return 0;
 }