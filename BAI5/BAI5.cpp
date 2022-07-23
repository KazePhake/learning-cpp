#include <iostream>
#include <fstream>

void input();
void output();
void process(long a);
long sec=0,gio=0,phut=0,giay=0;
const long hour = 3600;
const long minu = 60;

int main(int argc, char *argv[])
{
    input();
    process(sec);
    output();
    return 0;
}

void input()
{
    std::cin>>sec;
}

void process(long a)
{
    gio=a/hour;
    phut=(a-gio*hour)/minu;
    giay=(a-gio*hour-minu*phut);
}

void output()
{
    std::cout<<gio<<endl;
    std::cout<<phut<<endl;
    std::cout<<giay<<endl;
}