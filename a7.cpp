#include<iostream>
using namespace std;
int main ()
{
 int num;
 cin>> num;
 if (35<=num && num<75)
 {
 if (num%5==0 && num%2!=0)
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