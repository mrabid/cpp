#include<iostream>
using namespace std;
int main()
{
 int num;
 cin>> num;
 if (num%7==0 || num%5==0)
 {
 cout << "Divisible by 7 or 5"<< endl;
 }
 else
 {
 cout<< "Not divisible by 7 or 5"<< endl;
 }
 return 0;
}
