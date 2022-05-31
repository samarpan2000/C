/*
	E D C B A
	E D C B
	E D C
	E D
	E
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	char ch;
	
	for(i=5; i>=1; i--)
	{
		ch = 'E';
		for(j=i; j>=1; j--)
			printf("%c ", ch--);
			
		printf("\n");
	}
}
