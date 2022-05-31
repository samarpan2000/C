// Write a C program to sort a given array in ascending order using Bubble Sort algorithm.

#include<stdio.h>

void main()
{
	int i, j = 0;
	int temp = 0;

	int input_array[] = {65, 90, 12, 43, 32, 100, 78};

	printf("Before Sorting: \n");
	for(i=0; i<7; i++)
		printf("%d ", input_array[i]);

	printf("\n");

	for(i=0; i<7-1; i++)
	{
		for(j=0; j<7-1-i; j++)
		{
			if(input_array[j] >= input_array[j+1])
			{
				temp = input_array[j];
				input_array[j] = input_array[j+1];
				input_array[j+1] = temp;
			}
		}
	}

	// display
	printf("After Sorting: \n");
	for(i=0; i<7; i++)
		printf("%d ", input_array[i]);

	printf("\n");
}