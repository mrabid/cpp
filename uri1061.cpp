#include<iostream>

using namespace std;

int main()
{
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    string x;

    cin>>x>>d1>>h1>>x>>m1>>x>>s1;
    cin>>x>>d2>>h2>>x>>m2>>x>>s2;

    int r1, r2, temp, day, hr, mi, sec;

    r1 = s1 + m1*60 + h1*60*60 + d1*60*60*24;
    r2 = s2 + m2*60 + h2*60*60 + d2*60*60*24;
    temp = r2-r1;

    day = temp/(60*60*24);
    temp = temp%(60*60*24);

    hr = temp/(60*60);
    temp = temp%(60*60);

    mi = temp/(60);
    temp = temp%(60);

    sec = temp;

    cout<<day<<" dia(s)"<<endl;
    cout<<hr<<" hora(s)"<<endl;
    cout<<mi<<" minuto(s)"<<endl;
    cout<<sec<<" segundo(s)"<<endl;

    return 0;
}

