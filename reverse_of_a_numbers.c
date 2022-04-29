#include<stdio.h>
int main()
{
    int x,r,rx=0;
    scanf("%d",&x);
    while(x>0)
    {
        r=x%10;
        rx=(rx*10)+r;
        x=x/10;
    }
    printf("%d",rx);
}