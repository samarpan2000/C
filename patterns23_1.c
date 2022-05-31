/*
	E D C B A
	D C B A
	C B A
	B A
	A
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
		
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
			printf("%c ", (char)(j+64));
			
		printf("\n");
	}
}
