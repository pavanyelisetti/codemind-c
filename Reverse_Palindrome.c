#include<stdio.h>
int a(int x)
{
    int r=0,rev=0;
    while(x!=0)
    {
        r=x%10;
        rev=(rev*10)+r;
        x=x/10;
    }
    return rev;
}
int main()
{
    int x;
    scanf("%d",&x);
    do
    {
      x=x+a(x);
    }while(x!=a(x));
    printf("%d",x);
}