#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-1)
        {
            printf("*");
        }
            else
            {
            if((i==j) || (j==0))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            }
        }
        
        printf("
");
    }
}