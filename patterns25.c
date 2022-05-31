/*
	* * * * * 
	*       *
	*       *
	*       *
	* * * * *
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	
	for(i=1; i<=5; i++)
	{
		if(i==1 || i==5)
		{
			for(j=1; j<=5; j++)
				printf("* ");
				
			printf("\n");
		}
		else
		{
			for(j=1; j<=5; j++)
			{
				if(j==1 || j==5)
					printf("* ");
				
				else
					printf("  ");
			}
			
			printf("\n");
		}
	}
}
