#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int i,a[100],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+x>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}