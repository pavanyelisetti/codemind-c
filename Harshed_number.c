#include<stdio.h>
int main()
{
    int x,r,sum=0,t;
    scanf("%d",&x);
    t=x;
    while(t>0)
    {
        r=t%10;
        sum=sum+r;
        t=t/10;
    }
    if(x%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}