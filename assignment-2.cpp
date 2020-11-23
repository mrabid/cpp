Solution of problems no-1:
#include<iostream>
using namespace std;

int main()
{
    int in;
    cout<<"Enter any number: ";
    cin>>in;

    if(in>0)
    {
        cout<<"Positive";
    }
    else if(in<0)
    {
        cout<<"Negative";
    }
    else{
        cout<<"Neither positive or negative";
    }

    return 0;
}

Solution of problems no-2:
#include<iostream>
using namespace std;

int main()
{
    double in;
    cout<<"Enter any number: ";
    cin>>in;

    if(in == int(in))
    {
        cout<<"Integer";
    }
    else
    {
        cout<<"Float";
    }


    return 0;
}

Solution of problems no-3:
#include<iostream>
using namespace std;

int main()
{
    int in;
    cout<<"Enter any number: ";
    cin>>in;

    if(in >= 35 && in <= 75)
    {
        if(in % 5 == 0 && in % 2 != 0)
        {
            cout<<"Yes Divisible by 5";
        }
        else
            cout<<"No";
    }
    return 0;
}


Solution of problems no-4:
#include<iostream>
using namespace std;

int main()
{
    int in;
    cout<<"Enter any number: ";
    cin>>in;


    if(in >= 10 && in <= 40)
    {
        if(in % 5 == 0)
        {
            cout<<"Yes Divisible by 5"<<endl;
        }
        else
            cout<<"No"<<endl;
    }

    else if(in >= 60 && in <= 90)
    {
        if(in % 7 == 0)
        {
            cout<<"Yes Divisible by 7"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    
    return 0;
}

Solution of problems no-5:
#include<iostream>
using namespace std;

int main()
{
    int in;
    while(1)
    {
        cout<<"Write your marks: ";
        cin>>in;

        if(100 >= in && 86 <= in)
        {
            cout<<"A"<<endl;
        }
        else if(85 >= in && 81 <= in)
        {
            cout<<"A-"<<endl;
        }
        else if(80 >= in && 76 <= in)
        {
            cout<<"B+"<<endl;
        }
        else if(75 >= in && 71 <= in)
        {
            cout<<"B"<<endl;
        }
       else  if(70 >= in && 66 <= in)
        {
            cout<<"B-"<<endl;
        }
        else if(65 >= in && 61 <= in)
        {
            cout<<"C+"<<endl;
        }
        else if(60 >= in && 56 <= in)
        {
            cout<<"C"<<endl;
        }
        else if(55 >= in && 51 <= in)
        {
            cout<<"C-"<<endl;
        }
        else if(50 >= in && 46 <= in)
        {
            cout<<"D+"<<endl;
        }
        else if(45 >= in && 41 <= in)
        {
            cout<<"D"<<endl;
        }
        else if(40 >= in)
        {
            cout<<"F"<<endl;
        }
    }

    return 0;
}

Solution of problems no-6:
#include<iostream>
using namespace std;

int main()
{
    int in;
    while(1)
    {
        cout<<"Write your age: ";
        cin>>in;

        if(in < 3)
        {
            cout<<"Infancy"<<endl;
        }
        else if(in >= 3 && 12 > in)
        {
            cout<<"Childhood"<<endl;
        }
        else if(in >= 12 && 20 > in)
        {
            cout<<"Adolescence"<<endl;
        }
        else if(in >= 20 && 40 > in)
        {
            cout<<"Young adulthood"<<endl;
        }
        else if(in >= 40 && 65 > in)
        {
            cout<<"Mature adulthood"<<endl;
        }
        else if(in >= 65)
        {
            cout<<"Late adulthood"<<endl;
        }

    }

    return 0;
}

Solution of problems no-7:
#include<iostream>
using namespace std;

int main ()
{
    char ch;
    while(1)
    {
        cout<<"Enter anything: ";
        cin>>ch;

        if (ch>=65 && ch<=90)
        {
            cout<<"Uppercase latter"<<endl;
        }
        else if (ch>=97 && ch<=122)
        {
            cout<<"Lowercase latter"<<endl;
        }
        else if (ch>=48 && ch<=57)
        {
            cout<<"Digit"<<endl;
        }
        else if ((ch>0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127))
        {
            cout<<"Symbol"<<endl;
        }

    }

    return 0;
}

Solution of problems no-8:
#include<iostream>
using namespace std;
//main program
int main()
{
    double x, y;
    while(1)
    {
        cout<<"Write vale of x: ";
        cin>>x;
        cout<<"Write value of y: ";
        cin>>y;

        if(x==0 && y !=0 )
        {
            cout<<"y - axis"<<endl;;
        }
        else if(y==0 && x != 0)
        {
            cout<<"x - axis"<<endl;
        }
        else if(x>0&&y>0)
        {
            cout<<"1st quadrant"<<endl;
        }
        else if(x<0&&y>0)
        {
            cout<<"2nd quadrant"<<endl;
        }
        else if(x<0&&y<0)
        {
            cout<<"3rd quadrant"<<endl;
        }
        else if(x>0&&y<0)
        {
            cout<<"4th quadrant"<<endl;
        }
        else if (x==0 && y==0)
        {
            cout<<"Origin"<<endl;
        }
    }
    return 0;
}

Solution of problems no-9:
#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    while(1)
    {
        cout<<"Enter three sides of triangle: ";
        cin>>a>>b>>c;

        if(a==b && b==c)
        {
            cout<<"Not a right triangle";
        }
        else if(a==b || a==c || b==c)
        {
            cout<<"Not a right triangle";
        }
        else
        {
            cout<<"Right triangle";
        }
    }
    return 0;
}

Solution of problems no-10:
#include<iostream>
using namespace std;

int main ()
{
    int choice;
    float area, volume, r, l, w, b, h, s;
    cout<<"Input 1 for area of circle\n";
    cout<<"Input 2 for area of rectangle\n";
    cout<<"Input 3 for area of triangle\n";
    cout<<"Input 4 for volume of a cylinder\n";
    cout<<"Input 5 for volume of a sphere\n";
    cout<<"Input 6 for volume of a cube\n";

    cout<<"Input your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Input radius of the circle: ";
        cin>>r;
        area=3.14*r*r;
        cout<<"The area is: "<<area<<endl;
        break;

    case 2:
        cout<<"Input length of the rectangle: ";
        cin>>l;
        cout<<"Input width of the rectangle: ";
        cin>>w;
        area=l*w;
        cout<<"The area is: "<<area<<endl;
        break;

    case 3:
        cout<<"Input the base of the triangle: ";
        cin>>b;
        cout<<"Input the height of the triangle: ";
        cin>>h;
        area=.5*b*h;
        cout<<"The area is: "<<area<<endl;
        break;

    case 4:
        cout<<"Input the radius of the cylinder: ";
        cin>>r;
        cout<<"Input the height of the cylinder: ";
        cin>>h;
        volume=(3.14*r*r*h);
        cout<<"The volume is: "<<volume<<endl;
        break;

    case 5:
        cout<<"Input the radius of sphere: ";
        cin>>r;
        volume=(4*3.14*r*r*r)/3;
        cout<<"The volume is: "<<volume<<endl;
        break;

    case 6:
        cout<<"Input the side of a cube: ";
        cin>>s;
        volume=s*s*s;
        cout<<"The volume is: "<<volume<<endl;
        break;
    }

    return 0;
}
