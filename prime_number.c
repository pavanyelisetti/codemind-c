#include<stdio.h>
main()
{
    int i,x,count=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
       if(x%i==0)
       {
       count=count+1;
       }
    }
    if(count<=2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}