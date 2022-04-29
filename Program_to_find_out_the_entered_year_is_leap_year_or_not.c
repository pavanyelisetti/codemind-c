#include<stdio.h>
main()
{
    int x;
    scanf("%d",&x);
    if(x%400==0)
    {
        printf("True");
    }
    else if( x%100==0)
    {
        printf("False");
    }
    else if(x%4==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}