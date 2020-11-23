#include<iostream>
using namespace std;
int main ()
{
 int age;
 cin>> age;
 if (age<3)
 {
 cout <<"Infancy"<< endl;
 }
 else if (3<=age && age<12)
 {
 cout << "Childhood"<< endl;
 }
 else if (12<=age && age <20)
 {
 cout << "Adolescence"<< endl;
 }
 else if (20<=age && age<40)
 {
 cout<< "Young adulthood"<< endl;
 }
 else if (40<=age && age<65)
 {
 cout << "Mature adulthood"<< endl;
 }
 else if(65<=age)
 {
 cout << "Late adulthood"<< endl;
 }
 return 0;
}