#include<iostream>
using namespace std;
int main ()
{
 int num;
 cin>> num;
 if (50<num && num<100)
 {
 if (num%13==0 || num%9==0)
 {
 cout<< "Yes"<< endl;
 }
 else
 {
 cout << "No"<< endl;
 }
 }
 else
 {
 cout<< "No"<< endl;
 }
 return 0;
}