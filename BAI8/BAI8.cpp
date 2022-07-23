#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>

void input();
void output();
bool rec(long a,long b,long c);
long peri(long a,long b,long c);
double area(double a,double b,double c);
long c1=0,c2=0,c3=0;

int main(int argc,char *argv[])
{
    input();
    output();
    return 0;
}

void input()
{
    std::cin>>c1>>c2>>c3;
}

void output()
{
    if (rec(c1,c2,c3)==true) 
    {
        std::cout<<peri(c1,c2,c3)<<endl;
        std::cout<<fixed<<setprecision(1)<<area(c1,c2,c3);
    }
    else std::cout<<"-1";
}

bool rec(long a,long b,long c)
{
    if (((a+b)>c && (a+c)>b) && (b+c)>a) return true;
    else return false;
}

long peri(long a,long b,long c)
{
    long tot=0;
    tot=a+b+c;
    return tot;
}

double area(double a,double b,double c)
{
    double heron=0;
    double tot=0.0;
    heron=(a+b+c)/2;
    tot=sqrt(heron*(heron-a)*(heron-b)*(heron-c));
    return tot;
}