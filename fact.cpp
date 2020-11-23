#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    float sum=0;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
       fact *= i;
       sum += 1.0/fact;
    }
    cout<<"sum "<<sum<<endl;

    return 0;
}
