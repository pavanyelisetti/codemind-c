#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0,count1=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            count++;
        }
        if(str[i]=='o')
        {
            count1++;
        }
    }
    if(count*2==count1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}