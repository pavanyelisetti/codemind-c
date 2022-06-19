#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%[^
]s",s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    char ch;
    int count=0;
    scanf("%s",&ch);
    for(i=0;i<c;i++)
    {
        if(ch==s[i])
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("%d",count);
    }
    else
    {
        printf("-1");
    }
}