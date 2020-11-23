#include<iostream>
using namespace std;
int main()
{
    //Fahrenheit to Celsius and Kelvin.
    float fahrenheit,celsius,kelvin;
    cout<<"Enter the fahrenheit temperature :";
    cin>>fahrenheit;

    celsius=(fahrenheit-32)*5/9;
    cout<<"The celsius temperature is :"<<celsius<<endl;

    kelvin=celsius+273.15;
    cout<<"The kelvin temperature is :"<<kelvin<<endl;


    return 0;
}
