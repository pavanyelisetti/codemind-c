#include<stdio.h>
int main()
{
    int x,r,max=0;
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        if(r>max)
        {
            max=r;
        }
        x=x/10;
    }
    printf("%d",max);
}