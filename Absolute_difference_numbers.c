#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,c=0,rev=0,r,r1,temp,temp1,rev1=0,c1=0,rev2=0,temp2,temp3,rev3=0;
    scanf("%d%d",&a,&n);
    temp=a;
    while(1)
    {
        r=temp%10;
        c+=1;
        if (c>n)
        {
            break;
        }
        rev=rev*10+r;
        temp=temp/10;
    }
    temp3=rev;
    while(temp3>0)
    {
        r=temp3%10;
        rev3=rev3*10+r;
        temp3=temp3/10;
    }
    temp1=a;
    while(temp1>0)
    {
        r=temp1%10;
        rev1=rev1*10+r;
        temp1=temp1/10;
    }
    temp2=rev1;
    while(temp2>0)
    {
        r1=temp2%10;
        c1+=1;
        if (c1>n)
        {
            break;
        }
        rev2=rev2*10+r1;
        temp2=temp2/10;
    }
    printf("%d",abs(rev2-rev3));
}