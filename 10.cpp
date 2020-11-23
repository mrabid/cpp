#include<iostream>
using namespace std;
int main()
{
    int x,y,z;

    cin>>x;

    y=x%10;
    z=y*100;
    x=x/10;
    y=x%10;
    z=z+y*10;
    x=x/10;
    y=x%10;
    z=z+y;

    cout<<z;

    return 0;
}
