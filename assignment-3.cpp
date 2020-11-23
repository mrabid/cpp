Answer to the question no - 1:
#include <iostream>
using namespace std;

int main()
{
    int in, n= -1;

    do
    {
        cout<<"Enter any integer number: ";
        cin>>in;
        if(in != n)
        {
            cout<<"The input number was: "<<in<<endl<<endl;
        }
    }
    while(in!= n);
    {
        cout<<"The programming is end. Because, you gave me this number: "<<in<<endl<<endl;
    }
    return 0;
}

Answer to the question no - 2:
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char in= ' ';
    char n='#';
    do
    {
        cout<<"Enter any character: ";
        cin>>in;
        {
            cout<<"The input character was: "<<in<<endl<<endl;
        }
    }
    while(in!= n);
    {
        cout<<"The programming is end. Because, you gave me this character: "<<in<<endl<<endl;
    }
    return 0;
}


Answer to the question no - 3:
#include<iostream>
using namespace std;

int main()
{
    cout<<"The even number is: ";
    for (int i = 10; i <= 20; i++)
    {
        if(i%2 == 0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

Answer to the question no - 4:
#include<iostream>
using namespace std;
int main ()
{
    float i=2.00, x=4.00;
    for( i=2.00; i<=x ; i+=0.25)
    {
        if (i<x)
        {
            cout<<i<<", ";
        }
        else
        {
            cout <<x;
        }
    }
    return 0;
}

Answer to the question no - 5:
#include<iostream>
using namespace std;

void Odd(int x, int y)
{
    for(int i=x; i<=y; i++)
    {
        if(i % 2 != 0)
        {
            if(i==y || i== y-1)
            {
                cout<<i<<" ";
            }
            else
                cout<<i<<", ";
        }
    }
}

int main ()
{
    int x, y;
    cout<<"Enter the 1st digit: ";
    cin>>x;
    cout<<"Enter the 2nd digit: ";
    cin>>y;
    if(x == y)
    {
        cout<<"Nothing";
    }
    else
        Odd(x, y);

    return 0;
}


Answer to the question no - 6:
#include <iostream>
using namespace std;

void patten(int in)
{
 for (int r=in; r>=1; r=r-2)
    {
        for (int c=in; c>=1; c--)
        {
            if(r >= c)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int in;
    cout <<" Enter  any digit: ";
    cin >> in;
    patten(in);

    return 0;
}

Answer to the question no - 7:
#include<iostream>
using namespace std;
int main()
{
    int sum=0;

    for(int i=1; i<=100; i++)
    {
        sum = sum + i;
        if (i<100)
        {
            cout<<i<<" + ";
        }
        else
            cout<<i<<" = ";
    }
    cout<<sum;

    return 0;
}



Answer to the question no - 8:
#include <iostream>
#include <cmath>
using namespace std;

void display(int n, float sum, float result)
{
    for(int i=2; i<=n; i++)
    {
        result = 1/sqrt(i);
        sum = sum + result;
    }
    cout<<"Result is: "<<1+sum;
}

int main() 
{
    int n;
    float sum=0, result;
    cout<<"Enter any digit: ";
    cin>>n;
    display(n, sum, result);

    return 0;
}




Answer to the question no - 9:
#include <iostream>
using namespace std;

int main()
{
    int in, x;
    int cnt=0;
    cout<<"Enter the number: ";
    cin >>in;
    x = in;
    while(x != 0)
    {
        cnt++;
        x /= 10;
    }
    cout<<endl<<"Number of digits: "<<cnt<<endl;

    return 0;
}

Answer to the question no - 10:
#include<iostream>
using namespace std;

int main()
{
    int x, sum=0, evn=0;
    float avg=0;

    cout<<"Enter any 5 digit: "<<endl;
    for(int i=1; i<=5; i++)
    {
        cin>>x;
        if( x % 2 == 0 )
        {
            sum+=x;
            evn++;
        }
    }
    avg = float(sum)/evn;
    cout<<"Average for even numbers: "<<avg;

    return 0;
}
