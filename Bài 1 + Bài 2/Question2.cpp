#include <iostream>
#include "fraction.h"
using namespace std;

int main(int argc, char* argv[])
{
    Fraction cmd; //lệnh
    Fraction fr1(-2, 5);
    Fraction nam(5, 1);
    Fraction fr2, fr3,A;
    cin >> fr2 >> fr3;
    A = fr2++ + fr3-- + 5;
    fr2--;
    fr3++;
    if (fr2 == fr3) cout << "Phân số " << fr2 << " bằng " << fr3;
    else cout << "Phân số " << fr2 << " khác " << fr3;
    return 0;
}
