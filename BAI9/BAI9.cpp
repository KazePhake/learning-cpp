#include <iostream>
#include <fstream>

void input();
void output();
long num=0;
const long blk=100;

int main(int argc, char *argv[])
{
    input();
    output();
    return 0;
}

void input()
{
    std::cin>>num;
}

void output()
{
    if (num>blk) std::cout<<150000+(num-100)*2000;
    else std::cout<<1500*num;
}