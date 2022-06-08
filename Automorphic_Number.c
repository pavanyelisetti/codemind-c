#include<stdio.h>
int main()
{
    int n,temp,c=0,r,p,rev=0,count=0,rev1=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        c++;
        temp=temp/10;
    }
    p=n*n;
    temp=p;
    while(count!=c)
    {
        r=temp%10;
        rev=rev*10+r;
        count++;
        temp=temp/10;
    }
    temp=rev;
    while(temp>0)
    {
        r=temp%10;
        rev1=rev1*10+r;
        temp=temp/10;
    }
    if(n==rev1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}