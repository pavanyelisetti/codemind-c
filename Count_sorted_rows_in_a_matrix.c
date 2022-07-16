#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[100][100],i,j,c=0,c1=0,c2=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        c=0;
        c2=0;
        for(j=0;j<n-1;j++)
        {
            if(a[i][j]<a[i][j+1])
            {
                c+=1;
            }
            else
            {
                c2+=1;
            }
        }
        if(c==n-1 || c2==n-1)
        {
            c1+=1;
        }
    }
    printf("%d",c1);
}