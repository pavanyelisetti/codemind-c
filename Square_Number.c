#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x==i*i)
        {
            printf("True");
            break;
        }
    }
    if(x!=i*i)
    {
        printf("False");
    }
}