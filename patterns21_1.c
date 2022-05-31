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
	char ch;
		
	for(i=5; i>=1; i--)
	{
		ch = 'E';
		for(j=5; j>=i; j--)
			printf("%c ", ch--);
			
		printf("\n");
	}
}
