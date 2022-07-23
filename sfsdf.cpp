#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define maxn 1000000
using namespace std; 

char chinhphuong(int n)
{
    if (n<=0) return 1;
    if (n==int(sqrt(n))*int(sqrt(n))) return 1;
    return 0;
}

int main(int argc, char* argv[])
{
    int n,m;
    int tabl[maxn][maxn];
    cin>>n>>m;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++) cin>>tabl[i][j];
    //for (int i=0;i<n;i++)
        //for (int j=0;j<m;j++) if (chinhphuong(tabl[i][j])==1) tabl[i][j]=tabl[i][j];
    //else tabl[i][j]=(int(sqrt(tabl[i][j])+0.5))*(int(sqrt(tabl[i][j])+0.5));
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++) cout<<tabl[i][j];
}