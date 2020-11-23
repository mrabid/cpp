#include "class1.h"
#include<iostream>

using namespace std;

Class1::Class1()
{
    cout<<"I am Abid. \n";
}
void Class1::display()
{
    cout<<"I am University Student. \n";
}
void Class1::display1()
{
    cout<<"Now I'm continue my 5th semester. \n";
}
void Class1::semester()
{
    cout<<"I pick 4 course in this semester. \n";
}
void Class1::CGPA()
{
    cout<<"Insallah, I will be get 3.50 up CGPA in this semester. \n";
}
void Class1::Result()
{
    cout<<"Insallah, I hope my CGPA will be get 3.00 up in this semester."<<endl;
}

Class1 :: ~Class1()
{
    cout<<"End. \n";
}


void Class1::Ab()
{
    int x=15;
    int y=25;
    int small=(x<y) ? x : y;
    cout<<small<<endl;
}
