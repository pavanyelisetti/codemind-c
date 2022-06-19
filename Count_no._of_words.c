#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,j,count=0,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
            c++;
    }
    for(j=0;j<c;j++)
    {
        if(str[j]==' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}