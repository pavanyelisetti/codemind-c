#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a<x || b<x)
        {
            printf("UPLOAD ANOTHER
");
            
        }
        else
        {
            if(a==b)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}