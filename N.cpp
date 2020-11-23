
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);

int main()
{
    int s,l,b;
    float r,bs,ht;
    cout<<"Enter side of a square:";
    cin>>s;
    cout<<"Area of square is "<<area(s);

    cout<<"\nEnter length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Area of rectangle is "<<area(l,b);

    cout<<"\nEnter radius of circle:";
    cin>>r;
    cout<<"Area of circle is "<<area(r);

    cout<<"\nEnter base and height of triangle:";
    cin>>bs>>ht;
    cout<<"Area of triangle is "<<area(bs,ht);
}

int area(int s)
{
    return(s*s);
}

int area(int l,int b)
{
    return(l*b);
}

float area(float r)
{
    return(3.14*r*r);
}

float area(float bs,float ht)
{
    return((bs*ht)/2);
}

