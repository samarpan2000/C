/*
	E
	E D
	E D C
	E D C B
	E D C B A
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
		
	for(i=5; i>=1; i--)
	{
		for(j=5; j>=i; j--)
			printf("%c ", (char)(j+64));
			
		printf("\n");
	}
}
