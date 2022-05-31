/*
	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	
	for(i=1; i<=5; i++)
	{
		for(j=53; j>=49; j--)
			printf("%c ", (char)j);
			
		printf("\n");
	}
}
