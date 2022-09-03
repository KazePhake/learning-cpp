#include <iostream>
#include "SpecialNumber.h"
using namespace std;

int select = 0;

int main(int argc, char* argv[])
{
    SpecNum snum;
    cout << "Method input for m & n " << endl;
    cout << "1. Default (m=n=1)" << endl;
    cout << "2. My choice of number" << endl;
    cout << "Choose: ";
    cin >> select;
    switch (select)
    {
    case 1:
        {
            snum.Create();
            snum.Output();
        }
    case 2:
        {
            snum.Input();
            snum.Output();
        }
    }
}
