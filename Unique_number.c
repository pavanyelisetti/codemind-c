#include<stdio.h>
int main()
{
    int n,r,c=0,temp,i,count=0,s,j;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        c++;
        temp=temp/10;
    }
    int a[c];
    temp=n;
    for(i=0;i<c;i++)
    {
        r=temp%10;
        a[i]=r;
        temp=temp/10;
    }
    for(i=0;i<c;i++)     //1 
    {
        for(j=0;j<c;j++)    // 1 2 3 4 5
        {
            if(a[i]==a[j])   // 
            {
                count++;
            }
        }
        if(count>=2)
        {
            printf("Not Unique Number");
            s=1;
            break;
        }
        count=0;
    }
    if(s!=1)
    {
        printf("Unique Number");
    }
    
}