#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,k;
    scanf("%d%d%d",&x,&y,&k);
    m=pow(x,y);
    x=m%k;
    printf("%d",x);
}