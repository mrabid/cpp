Answer to the question No: 1
#include<iostream>
using namespace std;
int main ()
{
 int a;
 while (1)
 {
 cin>> a;
 if(a==-1)
 {
 break;
 }
 else
 {
 continue;
 }
 }
return 0;
}
Answer to the question No: 2
#include<iostream>
using namespace std;
int main ()
{
 char a;
 while (1)
 {
 cin>> a;
 if(a=='.')
 {
 break;
 }
 else
 {
 continue;
 }
 }
return 0;
}
Answer to the question No: 3
#include<iostream>
using namespace std;
int main()
{
 for (int i=0;i<100;i=i+0.25)
 {
 if (i<99)
 {
 cout << i<< ",";
 }
 else if (i==99)
 {
 cout << i;
 }
 }
 return 0;
}
Answer to the question No: 4
#include<iostream>
using namespace std;
int main ()
{
 for (float i=2;i<=4;i=i+0.25)
 {
 if (i<4)
 {
 cout << i<< ",";
 }
 else if (i==4)
 {
 cout << i;
 }
 }
 return 0;
}
Answer to the question No: 5
#include<iostream>
using namespace std;
int main ()
{
 for (char i='a';i<=122;i++)
 {
 if (i<122)
 {
 cout << i<< ",";
 }
 else if (i==122)
 {
 cout << i;
 }
 }
 return 0;
}
Answer to the question No: 6
#include<iostream>
using namespace std;
int main ()
{
 for (int i=1; i<=73; i++)
 {
 if (i%2!=0)
 {
 if (i<73)
 {
 cout << i<< ",";
 }
 else if (i==73)
 {
 cout<< i;
 }
 }
 }
 return 0;
}
Answer to the question No: 7
#include<iostream>
using namespace std;
int main ()
{
 int a,b;
 cin>> a>> b;
 for (int i=a; i<=b;i++)
 {
 if (i<b)
 {
 cout << i<< ",";
 }
 else if (i==b)
 {
 cout << i;
 }
 }
 return 0;
}
Answer to the question No: 8
#include<iostream>
using namespace std;
int main ()
{
 int a,b;
 cin>> a>> b;
 for (int i=a; i<=b;i++)
 {
 if (i%2!=0)
 {
 if (i<b)
 {
 cout << i<< ",";
 if (b%2!=0)
 {
 if (i==b)
 {
 cout << i;
 }
 }
 else if (b%2==0)
 {
 if (i==b-1)
 {
 cout << i;
 }
 }
 }
 }
 }
 return 0;
}
Answer to the question No: 9
#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin >>n;
 for (int i=1;i<=n;i++)
 {
 cout <<"* ";
 }
 return 0;
}
Answer to the question No: 10
#include<iostream>
using namespace std;
int main ()
{
 int n=0;
 for (int i=1;i<=100;i++)
 {
 n=n+i;
 if (i<100)
 {
 cout << i<< "+";
 }
 else if (i==100)
 {
 cout << i<< "=";
 }
 }
 cout << n<< endl;
 return 0;
}
Answer to the question No: 11
#include<iostream>
using namespace std;
int main ()
{
 int n=0;
 for (int i=2;i<=1024;i=i*2)
 {
 n=n+i;
 if (i<1024)
 {
 cout << i<< "+";
 }
 else if (i==1024)
 {
 cout << i<< "=";
 }
 }
 cout << n<< endl;
 return 0;
}
Answer to the question No: 12
#include<iostream>
using namespace std;
int main ()
{
 long long n;
 int cont=0;
 cin >> n;
 while (n!=0)
 {
 n=n/10;
 cont++;
 }
 cout << cont<< endl;
 return 0;
}
Answer to the question No: 13
#include<iostream>
using namespace std;
int main ()
{
 long long n,rev=0;
 cin >> n;
 while (n!=0)
 {
 rev = rev * 10;
 rev = rev + n%10;
 n = n/10;
 }
 cout << rev<< endl;
 return 0;
}
Answer to the question No: 14
#include<iostream>
using namespace std;
int main ()
{
 int x,y;
 cin>>x>>y;
 for (int i=x;i<=y;i++)
 {
 if (i%7==0)
 {
 cout <<i<< ",";
 }
 }
 return 0;
}
Answer to the question No: 15
#include<iostream>
using namespace std;
int main ()
{
 float n,avg=0;
 for (int i=1;i<=10;i++)
 {
 cin>> n;
 avg =avg+n;
 }
 cout << "Average: "<< avg/10<< endl;
 return 0;
}