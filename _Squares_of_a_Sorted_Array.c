#include<stdio.h>
void bubblesort(int *arr,int n)
{
    int i,j,temp,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
    if(flag==0)
    break;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    arr[i]=arr[i]*arr[i];
    bubblesort(arr,n);
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
