#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
	{
		printf("%d",ch);
	}
    if(ch>='a' && ch<='z')
	{
		printf("%d",ch);
	}
}