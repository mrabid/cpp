#include<iostream>
using namespace std;
int main ()
{
 int num;
 cin>> num;
 if (85<=num && num<=100)
 {
 cout << "A"<< endl;
 }
 else if (80<=num && num<85)
 {
 cout << "A-"<<endl;
 }
 else if (75<=num && num<80)
 {
 cout<< "B+"<< endl;
 }
 else if (70<=num && num<75)
 {
 cout<< "B"<< endl;
 }
 else if (65<=num && num<70)
 {
 cout << "B-"<< endl;
 }
 else if (60<=num && num<65)
 {
 cout<< "C+"<< endl;
 }
 else if (55<=num && num<60)
 {
 cout << "C"<< endl;
 }
 else if (50<=num && num<55)
 {
 cout << "C-"<< endl;
 }
 else if (45<=num && 50<num)
 {
 cout << "D+"<< endl;
 }
 else if (40<=num && 45<num)
 {
 cout << "D"<< endl;
 }
 else if (0<=num && num<40)
 {
 cout<< "F"<< endl;
 }
 return 0;
}
