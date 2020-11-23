#include<iostream>

using namespace std;

int main()
{
    int i, in, temp=0;

    for(i=0; i<5; i++)
    {
        cin>>in;
        if(in%2 == 0)
        {
            temp++;
        }
    }
    cout<<temp<<" valores pares"<<endl;


    return 0;
}
