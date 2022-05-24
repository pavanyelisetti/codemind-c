#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,sum=0,count=0,temp,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        while(temp>0)
        {
            r=temp%10;
            sum=sum+r;
            temp=temp/10;
        }
    }
    printf("%d",sum);
}