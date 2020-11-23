#include<iostream>
using namespace std;
int main()
{
    int x,y,z;

    cout<<"Enter the number :";
    cin>>x;
    cout<<"Enter the number :";
    cin>>y;


     z=x;
     x=y;
     y=z;

    cout<<"After swapping :"<<x<<endl<<y;

    return 0;
}
