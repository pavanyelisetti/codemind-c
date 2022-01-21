#include<stdio.h>
main()
{
    int l,b,h,l1,l2,a,a1,a2,c,p;
    scanf("%d%d%d%d",&l,&b,&h,&p);
    l1=l-(2*h);
    l2=b-(2*h);
    a1=l*b;
    a2=l1*l2;
    a=a1-a2;
    if( a<a1 && a>a2)//
    {
     c=a*p;
     printf("%d",c);
    }
    else
    {
        printf("Impossible");
    }
}