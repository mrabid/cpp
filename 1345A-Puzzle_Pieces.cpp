#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
        {
          int n, m;
          cin>>n>>m;
          if(n==1 or m==1 or (n==2 and m==2))
           {
              cout<<"YES\n";
           }
          else
            {
              cout<<"NO\n";
            }
        }

    return 0;
}
