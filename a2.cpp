#include <iostream>
using namespace std;
int main()
{
cout<<"Enter radius";
float radius;
cin >> radius;
float pi = 3.1415926535897;

//Area of a circle
float area = pi*radius*radius;

//Circumference of a circle
float circum = 2*pi*radius;

cout<<"Area of the circle is"<<area<<endl;
cout<<"Circumference of the circle is"<<circum<<endl;

return 0;
}
a 