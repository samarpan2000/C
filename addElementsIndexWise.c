// Write a program to take 2 integer arrays and generate a 3rd integer array
// whose elements will be the sum total of the elements of the input arrays indexwise.

#include<stdio.h>

void main()
{
	int i = 0;
	int arr1[10] = {6, 4, 9, 1, 90, 43, 32, 18, 10, 89};
	int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr3[10];


	for(i=0; i<10; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}

	printf("Output Array: \n");
	for(i=0; i<10; i++)
		printf("%d ", arr3[i]);

	printf("\n");

}