#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[100][100],i,j,sum,max;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        max=0;
        for(i=0;i<r;i++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
        printf("%d
",max);
    }
    
}
