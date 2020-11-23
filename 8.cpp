#include<iostream>
using namespace std;
int main()
{
    int year= 31536000, seconds, minutes, hours;


       hours=year/3600;
       year=year%3600;
       minutes=year/60;
       seconds=year%60;


    cout<<"Hour is: " <<hours<<endl;
    cout<<"Minutes is: "<<minutes<<endl;
    cout<<"Second is: "<<seconds<<endl;

    return 0;
}
