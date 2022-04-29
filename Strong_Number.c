#include <stdio.h>
int main()
{
    int i, sum=0,fact,n,num,r;
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(num==sum)
    {
        printf("The number %d is a strong number",num);
    }
    else
    {
        printf("The number %d is not a strong number",num);
    }
}