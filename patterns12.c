/*
	5 4 3 2 1
	5 4 3 2
	5 4 3
	5 4
	5
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
			printf("%d ", j);
			
		printf("\n");
	}
}
