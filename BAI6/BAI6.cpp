#include <iostream>
#include <fstream>

void input();
void output();
bool process(long a);
bool tes;
long num=0;

int main(int argc, char *argv[])
{
    input();
    process(num);
    output();
    return 0;
}

void input()
{
    std::cin>>num;
}

void output()
{
    if (process(num)==true) std::cout<<"chan";
    else std::cout<<"le";
}

bool process(long a)
{
    if ((a%2)==0) return true;
    else return false;
}