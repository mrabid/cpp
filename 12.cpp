#include <iostream>
using namespace std;

void isPrime(int hcf)
{
    for(int i = 2; i <= hcf; i++)
    {
        if(hcf % i == 0)
        {
            cout<<hcf<<"is NOT prime number";
        }
        else
            cout<<"not prime";
    }
}

int main()
{

    int i, num1, num2, min, hcf=1;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    min = num1;
    if(num2 < num1)
    {
        min = num2;
    }

    for(i = 1; i <= min; i++)
    {

        if((num1 % i) == 0 && (num2 % i) == 0)
        {
            hcf = i;
        }
    }
    cout << "Highest Common Factor is: "<< hcf;

    isPrime(hcf);


    return 0;
}

