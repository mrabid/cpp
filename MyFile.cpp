#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string name;
    ofstream file;
    file.open("Student.txt", ios::out|ios::app);
    cout<<"Type anything: ";
    getline(cin, name);
    file<<name<<endl;
    file.close();
    cout<<"All data is stored."<<endl;

    return 0;
}


