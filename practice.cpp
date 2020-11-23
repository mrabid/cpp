#include<iostream>
using namespace std;

void question11(int unmberArray[], int numberofElement)
{
    int ninimum = 10000;
    int maximum = -10000;
    sum = 0;
    for(int i=0; i<numberofElement; i++)
    {
        sum = sum + unmberArray[i];

        if(unmberArray[i]>)


    }
}

int main()
{
    int

    return 0;
}

/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n= 2;
    void *pr = &n;
    cout<<*(int*)pr;
}
*/

/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
  //  int ar[3] = {4, 6, 8};

  //  int *ar2 = (int*)malloc(12);
      int *ar2 = (int*)malloc(3* sizeof(int));

  //  *ar2 ;
  //  *(ar2+1) ;
  //  ar2[1] = 6;
 //   ar2[2] = 8;

    cin>> ar2[0];
    cin>>ar2[1];
    cin>>ar2[2];

    cout<<ar2[0]<<endl;
    cout<<ar2[1]<<endl;
    cout<<ar2[2]<<endl;

    cout<<*(ar2)<<endl;
    cout<<*(ar2+1)<<endl;
    cout<<*(ar2+2)<<endl;

    cout<<&ar2[0]<<endl;
    cout<<&ar2[1]<<endl;
    cout<<&ar2[2]<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int ar[3]={4, 8, 12};
    cout<<ar[0]<<endl;
    cout<<ar<<endl;
    cout<<*ar<<endl;
    cout<<ar+1<<endl;
    cout<<*(ar+1)<<endl;
    cout<<(ar+2)<<endl;
    cout<<*(ar+2)<<endl;

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int x=8;
    int *px = &x;
    cout<<&x<<endl;
    cout<<px<<endl;
    cout<<*px<<endl;
    ++(px);
    cout<<px<<endl;
    cout<<"\n"<<endl;

    char ch = 'A';
    char *pch = &ch;
    cout<<(void*)&ch<<endl;
    cout<<(void*)pch<<endl;
    cout<<*pch<<endl;
    ++(pch);
    cout<<(void*)pch<<endl;

    return 0;
}
*/

/*
#include <iostream>
#include<stdlib.h>
using namespace std;

struct mystruct
{
    int age;
    double height;
};

int main()
{
    struct mystruct *ps;
    ps = (struct mystruct*) malloc (sizeof(struct mystruct));
    ps ->age = 25;
    ps ->height = 5.88;

    cout<<ps->age<<endl;
    cout<<ps->height<<endl;

    return 0;
}
*/

/*
int main()
{
    struct mystruct s1;
    s1.age=22;
    s1.height=5.8;
    struct mystruct * ps1;
    ps1 = &s1;
    (*ps1).age = 25;
 // ps1 ->age=25;
    (*ps1).height = 6.11;
 // ps1 ->height=6.10;

    cout<<s1.age<<endl;
    cout<<s1.height<<endl;

    return 0;
}
*/

