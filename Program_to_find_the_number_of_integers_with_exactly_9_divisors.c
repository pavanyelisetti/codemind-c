#include<stdio.h>
int main()
{
    int n,i,j,count,count2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==9)
        {
            printf("%d ",i);
            count2++;
        }
    }
    printf("
Total=%d",count2);
}