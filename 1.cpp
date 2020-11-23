#include<iostream>
#include <cstdlib>
using namespace std;


void mult(int *a,int *b)
{
    int i;
    for(i =0; i<5; i++)
    {
        a[i]= a[i]*b[i];
    }
}
int main ()
{
    int i;
    int a[5] ;
    int b[5] = {2,4,6,8,10};
    cout<<"Before mult: \n";
    for(i =0; i<5; i++)
    {
        a[i]= rand() % 10 + 1;
        cout << a[i]<<" ";
    }
    cout<<"\nAfter mult: \n";
    mult(a,b);
    for(i =0; i<5; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}
