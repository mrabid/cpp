#include<iostream>
using namespace std;
int main ()
{
 int num;
 cin>> num;
 if (num%3==0 &&num%5==0)
 {
 cout << "Divisible by 3 and 5"<< endl;
 }
 else
 {
 cout<< "Not divisible by 3 and 5"<< endl;
 }
 return 0;
}