#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int x,i;
        scanf("%d",&x);
        for(i=1;i<=x;i++)
        {
            if(x==i*i)
            {
                printf("True");
                break;
            }
        }
        if(x!=i*i)
        {
            printf("False");
        }
        printf("
");
    }
}