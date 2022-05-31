/*
	 A B C D E
	 A B C D E
	 A B C D E
	 A B C D E
	 A B C D E
	 
*/

#include<stdio.h>

void main()
{
	int i = 0;
	char j;
	
	for(i=1; i<=5; i++)
	{
		for(j='A'; j<='E'; j++)
			printf("%c ", j);
			
		printf("\n");
	}
}
