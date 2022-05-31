#include<stdio.h>

void main()
{
	int A[5] = {1, 2, 3, 4, 5};
	int B[5] = {6, 7, 8, 9, 10};
	int i,j = 0;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("(%d,%d)\n", A[i], B[j]);
		}
	}
}