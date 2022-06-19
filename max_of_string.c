#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,max=str[0];
    for(i=1;str[i]!=NULL;i++)
    {
        if(max<str[i])
        {
            max=str[i];
        }
    }
    printf("%c",max);
}