#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0,even=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
      {
        a[i]=a[i]/10;
        count=count+1;
      }
    
      if(count%2==0)
     {
        even=even+1;
     }
     count=0;
        
    }
    printf("%d",even);
}