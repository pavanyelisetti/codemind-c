#include<stdio.h>
int main()
{
    int h,m;
    float a,d;
    scanf("%d:%d",&h,&m);
    a=30*(h)-(11/(2*1.0))*m;
    if(a<0)
    {
        a=360+a;
        printf("%.1f",a);
    }
    else if(a>180)
    {
         a=360-a;
         printf("%.1f",a);
    }
    else
    {
    printf("%.1f",a);
    }
}