#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,z,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=pow(2,i);
        if (z<=n)
        {
            x=z;
        }
        else
        {
            y=z;
            break;
        }
    }
    if(abs(n-x)<=abs(y-n))
    {
        printf("%d",abs(n-x));
    }
    else
    {
        printf("%d",abs(n-y));
    }
}