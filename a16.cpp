#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
 float x,y;
 cin >> x>>y;
 if (0<x && 0<y)
 {
 cout << "1st quadrant"<< endl;
 }
 else if (0>x && 0<y)
 {
 cout << "2nd quadrant"<< endl;
 }
 else if (0>x && 0>y)
 {
 cout << "3rd quadrant"<< endl;
 }
 else if (0<x && 0>y)
 {
 cout << "4th quadrant"<< endl;
 }
 else if (y==0)
 {
 cout << "X-axis"<< endl;
 }
 else if (x==0)
 {
 cout << "Y-axis"<< endl;
 }
 else if (x==0 && y==0)
 {
 cout << "origin"<< endl;
 }
 return 0;
}
