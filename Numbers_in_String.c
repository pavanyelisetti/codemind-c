#include<stdio.h>
int main()
{
    char str[100];
    int sum=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i])>=48 and (str[i])<=57)
        {
            sum=sum+str[i]-48;
        }
    }
    printf("%d",sum);
}