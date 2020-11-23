#include<iostream>

using namespace std;

int main()
{
    float n, sum=0;
	int i;
	int po = 0;

	for(i = 1; i <= 6; i++)
        {
         cin>>n;
         if(n>0)
          {
			sum = sum + n;
			po = po + 1;
          }
	   }
	cout<<po<<" valores positivos"<<endl;
	cout<<sum/po<<endl;


    return 0;
}
