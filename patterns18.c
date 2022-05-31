/*
	A
	B A
	C B A
	D C B A
	E D C B A
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	char ch = 'A';
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
			printf("%c ", (char)(j+64));
			
		printf("\n");
	}
}
