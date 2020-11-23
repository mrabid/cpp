#include <iostream>
using namespace std;
int main()
{
    int in,x,sum=0,tem;
    cout<<"Enter a number to check palindrome: ";
    cin>>in;
    tem=in;
    while(in>0)
    {
        x=in%10;
        sum=(sum*10)+x;
        in=in/10;
    }
    if(tem==sum)
        cout<<"It is a palindrome.";
    else
        cout<<"Its not a palindrome.";
    return 0;
}