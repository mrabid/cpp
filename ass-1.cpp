/*
Answer to the question No: 1
#include<iostream>
using namespace std;
int main()
{
    double width, length, area, perimeter;

    cout<<"Enter the number of width :";
    cin>>width;
    cout<<"Enter the number of length :";
    cin>>length;

    area=width*length;
    cout<<"\nThe number of area is: "<<area<<endl;

    perimeter=2*(width+length);
    cout<<"\nThe number of perimeter is: "<<perimeter;

    return 0;
}

Answer to the question No: 2

#include<iostream>
using namespace std;

int main()
{
    int year, days, seconds, minutes, hours;
    cout<<"Enter the number of year: ";
    cin>>year;

    days= year*365;

    seconds= days*24*60*60;
    cout<<"Second is: "<<seconds<<endl;


    minutes= days*24*60;
    cout<<"Minutes is: "<<minutes<<endl;

    hours= days*24;
    cout<<"Hour is: " <<hours<<endl;

    return 0;
}


Answer to the question No: 3
#include<iostream>
using namespace std;
int main()
{
    int hour,hour1,day,week;

    cout<<"Enter the hour :";
    cin>>hour;

    week=hour/168;
    day=(hour%168)/24;
    hour1=(hour%168)%24;

    cout<<"The weeks is :"<<week<<endl;
    cout<<"The days is :"<<day<<endl;
    cout<<"The hours is :"<<hour1;

    return 0;
}

Answer to the question No: 4
#include<iostream>
using namespace std;

int main()
{
    int year, month, day;

    cout<<"Enter the number of days: ";
    cin>>day;

    year = day / 365;
    day = day % 365;
    month = day / 30;
    day = day % 30;

    cout<<"Year is: "<<year<<endl;
    cout<<"Months is: "<<month<<endl;
    cout<<"Day is: "<<day<<endl;

    return 0;
}

Answer to the question No: 5
#include<iostream>
using namespace std;
int main()
{
    int age, year, birth, birthyear;

    while(1)
    {
        cout<<"\nEnter your current age: ";
        cin>>age;
        cout<<"Enter your current year: ";
        cin>>year;

        birth = (year - age) - 2000;

        birthyear = birth - (-2000);

        cout<<"\nYour date of birth year is :"<<birthyear<<endl;
    }

    return 0;
}


Answer to the question No: 6
#include<iostream>
using namespace std;
int main()
{
    int x,y;

    cout<<"Enter the number:";
    cin>>x;

    cout<<"Enter the number:";
    cin>>y;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"After swapping :"<<x<<" & "<<y;

    return 0;
}

Answer to the question No: 7
#include<iostream>
using namespace std;
int main()
{
    int in, last;

    cout << "Enter any number: ";
    cin >>in;

	last= in % 10;

    cout<<"The last digit is: "<<last<<endl;

    return 0;
}

Answer to the question No: 8
#include<iostream>
using namespace std;
int main()
{
    double  in, decimal;
    int integer;
    cout<<"Enter decimal number: ";
    cin>>in;

    integer = (int) in;
    decimal = in - integer;

    cout<<"Integer part is: "<<integer<<endl;
    cout<<"Deciamal part is: "<<decimal<<endl;

    return 0;
}

Answer to the question No: 9
#include<iostream>
using namespace std;

int main()
{
    int in, pennies=1, nickel=5, dime=10, quarters=25;
    cout<<"Enter any amount: ";
    cin>>in;

    quarters = in / 25;
    dime = (in % 25) / 10;
    nickel = ((in % 25) % 10) / 5;
    pennies = (((in % 25) % 10) % 5) / 1;

    cout<<"Quarters is: "<<quarters<<endl;
    cout<<"Dime is: "<<dime<<endl;
    cout<<"Nickel is: "<<nickel<<endl;
    cout<<"pennies is: "<<pennies<<endl;


    return 0;
}






Answer to the question No: 10
#include <iostream>
#include <math.h>
#include<stdlib.h>
using namespace std;

int main()
{

    float in1, in2, in3, x, y, dis, Part1, Part2;

    cout <<"Enter first value a: ";
    cin >>in1;
    cout <<"Enter second value b: ";
    cin >>in2;
    cout <<"Enter third value c: ";
    cin >>in3;

    dis= in2*in2 - 4*in1*in3;

    if (dis > 0)
    {
        x = (-in2 + sqrt(dis)) / (2*in1);
        y = (-in2 - sqrt(dis)) / (2*in1);

        cout <<"\nRoots are real and different: " << endl;
        cout <<"x = " <<x<<endl;
        cout <<"y = " <<y<<endl;
    }

    else if (dis == 0)
    {
        cout <<"\nRoots are real and same: " << endl;
        x = (-in2 + sqrt(dis)) / (2*in1);
        cout << "x = y =" <<x<< endl;
    }

    else
    {
        Part1 = -in2/(2*in1);
        Part2 =sqrt(-dis)/(2*in1);
        cout << "\nRoots are complex and different: "<< endl;
        cout <<"X = " <<Part1<<" + "<<Part1<<"i"<<endl;
        cout <<"Y = " <<Part2<<" - "<<Part2<<"i"<<endl;
    }

    return 0;
}
*/