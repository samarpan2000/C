/*
	A B C D E
	A B C D
	A B C
	A B
	A
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	char ch;
	
	for(i=5; i>=1; i--)
	{
		ch = 'A';
		for(j=1; j<=i; j++)
			printf("%c ", ch++);
			
		printf("\n");
	}
}
