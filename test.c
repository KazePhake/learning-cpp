#include<stdio.h>
#include<stdlib.h>
int main(){
    int facto=1,sum=0,n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        facto=facto*i;
        sum=sum+facto;
    }
    printf("the sum of n is: %d",sum);
    return 0;
}