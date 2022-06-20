#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,y,min=10000,c=0;
    scanf("%d%d",&x,&y);
    for (i=0; i<a; i++)
    {
        if (arr[i]<x || arr[i]>y)
        {
            if (min>arr[i])
            {
                min=arr[i];
                c++;
            }
        }
    }
    if (c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
    return 0;
}