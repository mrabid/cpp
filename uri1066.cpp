#include<iostream>

using namespace std;

int main()
{
    int i, in, posetive=0, negative=0, even=0, odd=0;

    for(i=0; i<5; i++)
    {
       cin>>in;
       if(in > 0)
       {
           posetive++;
       }
       else
       {
           if(in != 0)
           {
               negative++;
           }
       }
       if(in % 2 == 0)
       {
           even++;
       }
       else
       {
           odd++;
       }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<posetive<<" valor(es) positivo(s)"<<endl;
    cout<<negative<<" valor(es) negativo(s)"<<endl;

    return 0;
}
