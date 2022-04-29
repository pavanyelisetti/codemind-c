#include<stdio.h>
main()
{
    int n,x,d,s=0,m=1;
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        s=s+x;
        m=m*x;
        n=n/10;
    }
    d=m-s;
    printf("%d",d);
}