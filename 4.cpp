#include<iostream>
using namespace std;
int main ()
{
    //Takes the height of user in meter and converts it to feet.
    float height,result;

    cout<<"Enter your height in meeter :";
    cin>>height;

    result=100*height/(2.54*12);

    cout<<"Height in feet :"<<result<<endl;

    return 0;
}
