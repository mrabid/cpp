#include <iostream>
using namespace std;
int main()
{
    int num;

    cin>>num;

    if(num >= 20 && num >= 70);

    {
        if(num % 13 == 0 || num % 10 == 0 )
        {
            cout<< "Yes!!  It follows the logic!!"<<endl;
        }
        else
        {
            cout<< "No:( It doesnot follow the logic:("<<endl;
        }
    }
    else
    {
        cout<<"No the number doesnot comes in the range";
    }

    return 0;

}
