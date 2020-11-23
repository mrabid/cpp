#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
 float a,b,c;
 cin>> a>>b>>c;
 a=pow(a,2);
 b=pow(b,2);
 c=pow(c,2);
 if (b<a && c<a)
 {
 if (a==(b+c))
 {
 cout << "Right triangle"<< endl;
 }
 else
 {
 cout << "Not a right triangle"<< endl;
 }
 }
 else if (a<b && c<b)
 {
 if (b==(a+c))
 {
 cout << "Right triangle"<< endl;
 }
 else
 {
 cout << "Not a right triangle"<< endl;
 }
 }
 else if (a<c && b<c)
 {
 if(c==(a+b))
 {
 cout << "Right triangle"<< endl;
 }
 else
 {
 cout << "Not a right triangle"<< endl;
 }
 }
 else
 {
 cout << "Not a right triangle"<< endl;
 }
 return 0;
}
