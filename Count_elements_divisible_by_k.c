#include<stdio.h>
int main()
{
    int n,x,count=0;
    scanf("%d%d",&n,&x);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%x==0)
        {
            count++;
        }
    }
    printf("%d",count);
}