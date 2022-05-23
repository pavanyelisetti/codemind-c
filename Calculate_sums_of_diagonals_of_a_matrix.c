#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100][100],i,j,sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            if(i+j==n-1)
            {
                sum1=sum1+a[i][j];
            }
        }
}
    printf("Principal Diagonal:%d
",sum);
    printf("Secondary Diagonal:%d",sum1);
    
    
}