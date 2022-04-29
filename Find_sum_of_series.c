#include<stdio.h>
main()
{
    int x,i;
    float a,s=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        a=1/(i*1.0);
        s=s+a;
    }
    printf("%.2f",s);
}