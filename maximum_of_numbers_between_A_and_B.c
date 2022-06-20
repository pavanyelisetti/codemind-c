#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int arr[100],a,b,i,sum=0,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(max<arr[i])
            {
                max=arr[i];
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
    
}