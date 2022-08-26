#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[100],c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-3;i++)
    {
        if(a[i+2]==a[i]+a[i+1])
        {
            c+=1;
        }
    }
    if(c==n-3)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}