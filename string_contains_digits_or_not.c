#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char str[100];
        scanf("%s",str);
        int count=0,j;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]>=48 && str[j]<=57)
            {
                count++;
            }
        }
        if(count>=1)
        {
            printf("Yes
");
        }
        if(count==0)
        {
            printf("No
");
        }
    }
}