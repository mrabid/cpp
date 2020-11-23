#include<iostream>

using namespace std;

int main()
{
    double input;
    int temp=0;
    for(int i=0; i<6; i++)
    {
        cin>>input;
        if(input > 0)
            temp++;
    }
    cout<<temp<<" valores positivos"<<endl;

    return 0;
}
