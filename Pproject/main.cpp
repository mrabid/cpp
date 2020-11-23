#include <iostream>
#include "pclass.h"

using namespace std;

int main()
{
    Pclass ob;
    Pclass *P = &ob;
    P -> display();

    const Pclass ob2;
    ob2.display2();

    Pclass ob3;
    ob3.display3();

    return 0;
}
