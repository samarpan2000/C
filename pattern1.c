#include<stdio.h>

void main()
{
	int i, j = 0;
	int total = 4;
	
	for(i=1; i<=total; i++)
	{
		for(j=total-i; j>=1; j--)
		{
			if(j != i)
				printf(' ');
			else
				printf('*');	
		}
		printf("\n");
	}
	
}
