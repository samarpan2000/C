/*
			1
		  2 1
		3 2 1
	  4 3 2 1
	5 4 3 2 1
	
*/

#include<stdio.h>

void main()
{
	int i, j, k = 0;
	
	for(i=1; i<=5; i++)
	{
		// spaces
		for(k=(5-i); k>=0; k--)
			printf("  ");
			
		// numbers
		for(j=i; j>=1; j--)
			printf("%d ", j);
			
		printf("\n");
	}
}
