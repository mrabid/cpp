#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
 int option;
 cout << "1. Area of a circle "<< endl;
 cout << "2. Area of a rectangle "<< endl;
 cout << "3. Area of a triangle "<< endl;
 cout << "4. Volume of a cylinder "<< endl;
 cout << "5. Volume of a sphere "<< endl;
 cout << "6. volume of a cube "<< endl;
 cout <<endl<< "Select an option (1-6): ";
 cin>> option;
 switch (option)
 {
 case 1:
 {
 cout <<endl<< "<< Area of a rectangle >>" << endl;
 float r,area;
 cout << "Enter radius: ";
 cin>> r;
 area=3.1416*r*r;
 cout << "Area of the circle is "<< area<< "."<< endl;
 break;
 }
 case 2:
 {
 cout <<endl<< "<< Area of a rectangle >>" << endl;
 float a,b,area;
 cout << "Enter length: ";
 cin>> a;
 cout << "Enter width: ";
 cin>> b;
 area=a*b;
 cout << "Area of the rectangle is "<< area<< "."<< endl;
 break;
 }
 case 3:
 {
 cout <<endl<< "<< Area of a triangle >>" << endl;
 float b,h,area;
 cout << "Enter hight: ";
 cin>> h;
 cout << "Enter base: ";
 cin >> b;
 area = .5*b*h;
 cout << "Area of the triangle is "<< area<< "."<< endl;
 break;
 }
 case 4:
 {
 cout <<endl<< "<< Area of a cylinder >>" << endl;
 float r,h,area;
 cout << "Enter radius: ";
 cin>> r;
 cout << "Enter hight: ";
 cin>> h;
 area=3.1416*r*r*h;
 cout << "Volume of a cylinder is "<< area<< "."<< endl;
 break;
 }
 case 5:
 {
 cout <<endl<< "<< Area of a sphere >>" << endl;
 float r,area;
 cout << "Enter radius: ";
 cin>> r;
 area=1.3333*3.1416*r*r*r;
 cout << "Volume of a sphere is "<< area << "."<< endl;
 break;
 }
 case 6:
 {
 cout <<endl<< "<< Area of a cube >>" << endl;
 float a,area;
 cout << "Enter length: ";
 cin>>a;
 area =a*a*a;
 cout << "Volume of a cube is "<< area << "."<< endl;
 break;
 }
 default:
 {
 cout << endl<< "<< YOUR CHOICE IS OTHEN THEN 1-6 >>"<< endl;
 break;
 }
 }
 return 0;
}