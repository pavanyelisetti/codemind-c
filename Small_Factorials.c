#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int n,i;
        scanf("%d",&n);
        int fact=1;
        for(i=n;i>1;i--)
        {
            fact=fact*i;
        }
        printf("%d
",fact);
    }

}