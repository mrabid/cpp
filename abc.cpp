#include <iostream>
using namespace std;

int searchList(int list[], int numElems, int value)
{
int index = 0;
int position = -1;
bool found = false;

while (index < numElems && !found){

if (list[index] == value){
found = true;
position = index;
}
index++;
}
return position;
}

int main ()
{
    int list[5]={10,20,30,40,50};
    int x=searchList(list,5,40);
    cout<<x;
}