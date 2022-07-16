#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        return 1;
    }
}
int main()
{
    int n,temp,x=0,c=0,r;
    scanf("%d",&n);
    if (prime(n)==1)
    {
        temp=n;
        while(temp>0)
        {
            r=temp%10;
            x+=1;
            if (prime(r)==1)
            {
                c+=1;
            }
            temp=temp/10;
        }
        if (c==x)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}