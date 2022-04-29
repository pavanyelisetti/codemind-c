#include<stdio.h>
main()
{
    int i,r,k,count=0;
    scanf("%d%d%d",&i,&r,&k);
    for(i;i<=r;i++)
    {
       if(i%k==0)
       {
       count=count+1;
       }
    }
    printf("%d",count);
    
}