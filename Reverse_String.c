#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
}