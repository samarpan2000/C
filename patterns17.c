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
		for(j=ch; j>='A'; j--)
			printf("%c ", j);
			
		ch++;
		printf("\n");
	}
}
