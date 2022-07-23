#include <iostream>
#include <fstream>

void input();
void output();
int num=0,tram=0,chuc=0,dv=0;

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
    dv=num%10;
    tram=num/100;
    chuc=(num/10)%10;
    num=dv*100+chuc*10+tram;
    std::cout<<num;
}