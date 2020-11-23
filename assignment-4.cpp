Answer to the question no – 1:
#include <iostream>
using namespace std;

void display(int in, int reversedNumber, int remainder)
{
    while(in != 0) {
        remainder = in%10;
        reversedNumber = reversedNumber*10 + remainder;
        in /= 10;
    }

    cout <<"Reversed Number = "<<reversedNumber<<endl;
}

void summition(int in, int sum, int m)
{
    while(in>0)    
         {    
           m = in%10;    
           sum = sum+m;    
           in = in/10;    
         }
    cout<<"Sum of the reverse number: "<<sum<<endl;
}

int main() {
    int in, m, reversedNumber = 0, remainder, sum=0;
    cout << "Enter an integer: ";
    cin >> in;
    display(in, reversedNumber, remainder);
    summition(in, sum, m);

    return 0;
}



Answer to the question no – 2:
#include <iostream>
#include <stdlib.h>
using namespace std;
void display(int array[], int size);

int main()
{
    int arr[10];
    cout<<"Before sorting : ";
    for(int i =0 ; i<10;++i)
    {
        arr[i] = rand()%10;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arrSize = 10;

    display(arr,arrSize);

    cout<<"After sorting  : ";
    for(int i=0; i<arrSize; ++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
void display(int array[], int size)
{
    for(int i =0;i<size; ++i)
    {
        for(int j=0; j<size-1; ++j)
        {
            if(array[j]> array[j+1])
            {
                int a = array[j];
                array[j] = array[j+1];
                array[j+1] = a;
            }
        }
    }
}


Answer to the question no – 3:
#include <iostream>
using namespace std;
int Max(int a[],int n);
int Min(int a[],int n);
float Average(int sum, int count);

int main()
{
    int i, size=0, max, min, sum=0, count=0;
    float average;
    cout<<"Enter array size: ";
    cin>>size;

    int array[size];
    cout<<"\nEnter array numbers: ";
    for(i=0;i<size;i++)
    {
        cin>>array[i];
        sum = sum+array[i];
        count++;
    }

    max = Max(array, size); 
    min = Min(array, size); 
    average= Average(sum, count);
    cout<<"Maximum element in the array is: " << max <<endl;
    cout<<"Minimum element in the array is: " << min <<endl;
    cout<<"All elements average is: " << average <<endl;

return 0;
}
int Max(int a[],int n) 
{
    int i, max;
    max = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max) 
            max =a[i]; 
    }
    return max;
}
int Min(int a[],int n)   
{
    int i, min;
    min = a[0];       
    for(i=1;i<n;i++)
    {
        if(a[i]<min)   
            min =a[i];   
    }
    return min;    
}
float Average(int sum, int count)
{
    float average = float(sum) / count;

    return average;
}
Answer to the question no – 4:
#include<iostream>
using namespace std;
int display(int array[], int x, int value);

int main()
{
    int arr[5]={2,5,7,10,9};
    int in, result;
    cout<< "Search a number: ";
    cin>>in;
    result = display( arr, 5, in);
    cout<< "Array Elements: ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<in<< " is not present in "<<result<< " places"<<endl;
    return 0;
}

int display(int array[], int size, int search)
{
    int in=0, pos=0;
    
    for(in=0; in<size; in++)
    {
        if(array[in]!=search)
        {
           
            pos++;
        }
    }
    return pos;
}


Answer to the question no – 5:
#include <iostream>
#include<stdlib.h>
#include <ctime>
using namespace std;
void Average(int arrayrcv[][4]);

int main()
{
    int in1,in2;
    srand((unsigned) time(0));
    cout<< "Enter lower limit : ";
    cin>>in2;
    cout<< "Enter upper limit : ";
    cin>>in1;
    int arr [5][4];
    for(int x=0; x<5; x++)
    {
        for(int y=0; y<4; y++)
        {
            arr[x][y]= (rand() % (in1-in2)) + in2;
            cout<<arr[x][y]<< " ";
        }
        cout<<endl;
    }
    Average(arr);
    return 0;
}
void Average(int arrayrcv[][4])
{
    for(int x=0; x<5; x++)
    {
        int sum =0;
        for(int y=0; y<4; y++)
        {
            sum = sum + arrayrcv[x][y];
        }
        cout<< "Average of row "<<x+1<< " is = "<<(sum*1.0)/4<<endl;
    }
}

Answer to the question no – 6:
#include <iostream>
using namespace std;
void display(string rcv);

int main()
{
    string in;
    cout<< "Write a sentence in lowercase : ";
    getline(cin, in);
    display(in);
    return 0;
}

void display(string rcv)
{
    for(int i=0; rcv[i]!='\0'; i++)
    {
        if(rcv[i]>='a' && rcv[i]<='z')
        {
            rcv[i]=rcv[i]-32;
        }
    }
    cout<< "Sentence in uppercase : "<<rcv<<endl;
}

Answer to the question no – 7:
#include <iostream>
using namespace std;
bool display(string out);

int main()
{
    string in;
    cout << "Enter a String: ";
    cin >> in;
    if(display(in) == true)
    {
        cout << " it is Palindrome "<<endl;
    }
    else
    {
        cout << "It is not Palindrome"<<endl;
    }

    return 0;
}

bool display(string out)
{
    int i=0;
    int a = out.size()-1;
    while(a>0)
    {
        if(out[a] != out[i])
        {
            return false;
        }
        else
        {
            a--;
            i++;
        }
    }
    return true;
}


Answer to the question no – 8:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string display(string rcv);

int main()
{
    string in;
    cout << "Enter a sentence: ";
    getline(cin, in);
    string rcv = display(in);
    cout <<"Backward sentence: "<<rcv;
    return 0;
}

string display(string rcv)
{
    reverse(rcv.begin(), rcv.end());
    rcv.insert(rcv.end(), ' ');
    int n = rcv.length();
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (rcv[i] == ' ') 
        {
            reverse(rcv.begin() + count, rcv.begin() + i);
            count = i+1;
        }
    }
    rcv.pop_back();

    return rcv;
}

Answer to the question no – 9:
#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
void display(string id);

int main()
{
    string in;
    cout<< "Enter your ID : ";
    getline(cin, in);
    display(in);
    return 0;
}
void display(string rcv)
{
    int number = rcv.length();
    if(number == 7)
    {
        if(rcv[2] =='1' ||rcv[2] =='2' ||rcv[2] =='3')
        {
            cout<< "Year : 20"<< rcv[0] << rcv[1] << endl;
            if(rcv[2]=='2')
                cout<< "Semester :Spring"<<endl;
            else if(rcv[2]=='3')
                cout<< "Semester : Summer "<< endl;
            else if(rcv[2]=='1')
                cout<< "Semester : Autumn"<<endl;
            cout<< "Unique ID : "<<rcv[3]<< rcv[4]<< rcv[5]<< rcv[6];
        }
        else
        {
            cout << "The ID is NOT valid";
        }
    }
    else
    {
        cout << "The ID is NOT valid";
    }
}

Answer to the question no – 10:
#include <iostream>
using namespace std;
bool display1(int);
int display2(int);
int display3 (int);


int main()
{
    int in, rev,num, sum ;
    cout<<"Enter any Number: " ;
    cin>>in;
    cout << endl;
    if (display1(in))
    {
        cout << in <<" is a prime number."<<endl;
    }
    else
    {
        cout << in <<" is not a prime number."<<endl;
    }
    int r1= display2(in);
    if(r1==in)
    {
        cout<<in <<" is A perfect number." << endl;
    }
    else
    {
        cout<<in<< " is not a Perfect Number."<< endl;
    }
    int r2= display3 (in);
    if(in==r2)
    {
        cout<<in<<" is a Palindrome Number. \n" << endl;
    }
    else
    {
        cout<<in<<" is not a Palindrome Number. \n" << endl;
    }

    return 0;
}
bool display1(int a)
{
    bool prime = true;
    if (a == 0 || a == 1)
    {
        prime = false;
    }
    else
    {
        for (int i = 2; i <= a / 2; ++i)
        {
            if (a % i == 0)
            {
                prime = false;
                break;
            }
        }
    }
    return prime;
}
int display2(int b)
{
    int sum=0;
    for(int i=1; i<b; i++)
    {
        if(b%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int display3 (int c)
{
    int a,r,s=0;
    a=c;

    while(c>0)
    {
        r=c%10;
        s=s*10+r;
        c=c/10;
    }
    return s;
}
