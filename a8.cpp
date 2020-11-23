#include<iostream>
using namespace std;
int main ()
{
 int num;
 cin>> num;
 if (10<num && num<40)
 {
 if (num%5==0)
 {
 cout<< "Yes"<< endl;
 }
 else
 {
 cout << "No"<< endl;
 }
 }
 else if (60<num && num<90)
 {
 if(num%7==0)
 {
 cout << "Yes"<< endl;
 }
 }
 else
 {
 cout<< "No"<< endl;
 }
 return 0;
}
