#include<stdio.h>
int main()
{
    long long int n,temp,count=0,r;
    scanf("%lld",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        count++;
        temp=temp/10;
    }
    if(count==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}