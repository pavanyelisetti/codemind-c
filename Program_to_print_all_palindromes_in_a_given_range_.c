#include<stdio.h>
int p(int i)
{
    int r,rev=0;
    while(i)
    {
       r=i%10;
       rev=(rev*10)+r;
       i=i/10;
    }
    return rev;
}
int main()
{
    int x,y,i;
    scanf("%d
%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i==p(i))
        {
            printf("%d ",i);
        }
    }
    
}