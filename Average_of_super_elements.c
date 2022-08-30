#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[100],sum=0,c=0,c1=0,j;
    float ans;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if (a[i]==a[j])
            {
                c+=1; 
            }
        }
            if(a[i]==c)
            {
                sum=sum+a[i];
                a[i]=0;
                a[j]=0;
                c1+=1;
            }
    }
    if(c1==0)
    {
        printf("-1");
    }
    else
    {
    ans=float(sum)/c1;
    printf("%.2f",ans);
    }
}