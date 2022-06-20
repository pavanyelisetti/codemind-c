#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100],a,b,i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}