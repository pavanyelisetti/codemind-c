#include<stdio.h>
int main()
{
	int x,y,i,hcf;
	scanf("%d%d",&x,&y);
	for(i=x;i>=1;i--)
	{
		if(x%i==0 && y%i==0)
		{
		 printf("%d",i);
		 break;
		}
	}
    
}