#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,y,c=0,j,max=0,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
        }
        if(max<c)
        {
            max=c;
            y=a[i];
        }
        if(max==c)
        {
            if(y>a[i])
            {
                y=a[i];
            }
        }
        a[i]=0;
        a[j]=0;
    }
    printf("%d",y);
}