#include<stdio.h>
int main()
{
    int x,sum=0,mul=1,r;
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        sum=sum+r;
        mul=mul*r;
        x=x/10;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}