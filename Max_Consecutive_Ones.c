#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,j,maxx,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxx=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c++;
            maxx=max(c,maxx);
        }
        else
        {
            c=0;
        }
    }
    printf("%d",maxx);
}