#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%4==0 || b%4==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}