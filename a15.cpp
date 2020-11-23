#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main ()
{
 float x,y,a,b,c,b1;
 cin>>a>>b>>c;
 if (a!=0)
 {
 if(pow(b,2)>=4*a*c)
 {
 x=(-b+(sqrt((pow(b,2)-4*a*c))))/2*a;
 cout<<x;
 y=(-b-(sqrt((pow(b,2)-(4*a*c)))))/2*a;
 cout<<y;
 }
 else
 {
 float x1,x2,y1,y2;
 b1=abs((b*b)-4*a*c);
 x1=-b/2*a;
 x2=sqrt(b1)/2*a;
 cout<<x1<<"+"<<x2<<"i"<<endl;
 y1=-b/2*a;
 y2=sqrt(b1)/2*a;
 cout<<y1<<"-"<<y2<<"i";
 }
 }
 return 0;
}