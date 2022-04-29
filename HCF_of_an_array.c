#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,m,max,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++) //0,1,2
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    m=1;
    for(j=1;j<max/2;j++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%j==0)
            {
                count+=1;
            }
        
        }
        if(count==n)
        {
            m=j;
        }
        count=0;
    }
    printf("%d",m);
}