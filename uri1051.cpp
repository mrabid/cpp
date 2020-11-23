#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float input, x, y, z, output;
    cin>>input;


    if(input <= 2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else
    {
        if(input > 2000.00 && input <= 3000.00)
         {
           x = input - 2000.00;
           x = ((x*8)/100);
           output = x;
         }
        else if(input > 3000.00 && input <= 4500.00)
         {
           x = input - 2000.00;
           y = x - 1000.00;
           x -= y;
           x = ((x*8)/100);
           y = ((y*18)/100);
           output = x+y;
         }
        else
         {
           x = input - 2000.00;
           y = x - 1000.00;
           z = y - 1500.00;
           x -= y;
           y -= z;
           x = ((x*8)/100);
           y = ((y*18)/100);
           z = ((z*28)/100);
           output = x+y+z;
         }
       {
          cout<<fixed;
          cout<<setprecision(2);
          cout<<"R$ "<<output<<endl;
       }
     }
    return 0;
}
