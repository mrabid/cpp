#include<iostream>
using namespace std;
int main ()
{
 float a,b,c;
 cin>> a>>b>>c;
 if (a<c && c<b)
 {
 cout << "Largest: "<< b<< endl<< "Smallest: "<< a<< endl;
 }
 else if (a<b && b<c)
 {
 cout << "Largest: "<< c<< endl<< "Smallest: "<< a<< endl;
 }
 else if (b<a && a<c)
 {
 cout << "Largest: "<< c<< endl<< "Smallest: "<< b<< endl;
 }
 else if (c<a && a<b)
 {
 cout << "Largest: "<< b<< endl<< "Smallest: "<< c<< endl;
 }
 else if (b<c && c<a)
 {
 cout << "Largest: "<< a<< endl<< "Smallest: "<< b<< endl;
 }
 else if (a<b && b<a)
 {
 cout << "Largest: "<< a<< endl<< "Smallest: "<< c<< endl;
 }
 else if (a=b)
 {
 if(a<c)
 {
 cout << "Largest: "<< c<< endl<< "Smallest: "<< a<< endl;
 }
 else
 {
 cout << "Largest: "<<a<<endl<< "Smallest: "<<c<< endl;
 }
 }
 else if (b=c)
 {
 if(a<b)
 {
 cout << "Largest: "<< b<< endl<< "Smallest: "<< a<< endl;
 }
 else
 {
 cout << "Largest: "<< a<< endl<< "Smallest: "<< b<< endl;
 }
 }
 else if (c=a)
 {
 if(a<b)
 {
 cout << "Largest: "<< b<< endl<< "Smallest: "<< a<< endl;
 }
 else
 {
 cout << "Largest: "<< a<< endl<< "Smallest: "<<b<< endl;
 }
 }
 else
 {
 cout << "Largest: "<< a<< endl<< "Smallest: "<< b<< endl;
 }
 return 0;
}
