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
	char ch = 'E';
	char ch1;
	
	for(i=5; i>=1; i--)
	{
		ch1 = ch;
		for(j=i; j>=1; j--)
			printf("%c ", ch1--);
			
		ch--;
		printf("\n");
	}
}
