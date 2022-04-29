#include<stdio.h>
int main()
{
    int n,mul,sum=0,r;
    scanf("%d",&n);
    mul=n*n;
    while(mul>0)
    {
        r=mul%10;
        sum=sum+r;
        mul=mul/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}