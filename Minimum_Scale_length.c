#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[100],x=0,c=0,max,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    for(j=max;j>=0;j--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if (a[i]%j==0)
            {
                c+=1;
            }
        }
        if(c==n)
        {
            printf("%d",j);
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("1");
    }
}