#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            if(i==1 || i==n || k==1|| k==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}
/*n=int(input())
for i in range(1,n+1):
    for j in range(n,i,-1):
        print(" ",end="")
    for l in range(0,n):
        if(i==1 or i==n or l==0 or l==n-1):
            print("*",end="")
        else:
            print(" ",end="")
    print()*/