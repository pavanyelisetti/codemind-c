#include<stdio.h>
main()
{
	int i,x,y=0;
	scanf("%d",&x);
	for(i=1;i<=x/2;i++)
	{
		if(x%i==0)
		{
			y+=i;
		
	    }
	}
	if(x==y)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}