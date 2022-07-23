#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void input();
void output();
void process(double a, double b, double c, double d, double e);
double lite=0.0f,math=0.0f,phy=0.0f,che=0.0f,eng=0.0f,ave=0.0f;
string typo;

int main(int argc, char *argv[])
{
    input();
    process(lite,math,phy,che,eng);
    output();
    return 0;
}

void input()
{
    std::cin>>lite>>math>>phy>>che>>eng;
}

void output()
{
    std::cout<<fixed<<setprecision(1)<<ave<<endl;
    std::cout<<typo<<endl;
}

void process(double a, double b, double c, double d, double e)
{
    ave=((lite*2+math*3+phy+che+eng*2)/9);
    if (ave<5.0f) typo="YEU";
    else if (ave>=5.0f && ave<6.5f) typo="TB";
         else if (ave>=6.5f && ave<8.0f) typo="KHA";
              else typo="GIOI";
}