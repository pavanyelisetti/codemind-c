#include<stdio.h>
main()
{
	int x,y,i,m,count=0;
	scanf("%d%d",&x,&y);
	for(i=1;i<=x*y;i++)
	{
		m=x*i;
    	if(m%y==0)
	    {
		    printf("%d",m);
		    break;
	    }
	}

      	
	
}