/*
	1 2 3 2 1
	1       1
	1       1
	1       1
	1 2 3 2 1
	
*/

#include<stdio.h>

void main()
{
	int i, j, k = 0;
	
	for(i=1; i<=5; i++)
	{
		if(i==1 || i==5)
		{
			k = 0;
			for(j=1; j<=5; j++)
			{
				if(j<=3)
					printf("%d ", ++k);
					
				else
					printf("%d ", --k);
			}
			printf("\n");
		}
		
		else
		{
			k = 1;
			for(j=1; j<=5; j++)
			{
				if(j==1 || j==5)
					printf("%d ", k);
				
				else
					printf("  ");
			}
			printf("\n");
		}
	}
	
}
