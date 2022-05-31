/*
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	
	for(i=1; i<=9; i++)
	{
		if(i<=5)
		{
			for(j=1; j<=i; j++)
				printf("%d ", j);
			
			printf("\n");
		}
		else
		{
			for(j=1; j<=(10-i); j++)
				printf("%d ", j);
				
			printf("\n");
		}
	}
}
