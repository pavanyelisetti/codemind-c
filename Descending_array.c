#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            s=s+1;
        }
    }
    if(s==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}