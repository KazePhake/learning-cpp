#include <iostream>
#include <fstream>
#include <algorithm>

void input();
void output();
long big=0,num1=0,num2=0,num3=0;

int main(int argc, char *argv[])
{
    input();
    output();
    return 0;
}

void input()
{
    std::cin>>num1>>num2>>num3;
}

void output()
{
    big=max(num1,max(num2,num3));
    std::cout<<big;
}