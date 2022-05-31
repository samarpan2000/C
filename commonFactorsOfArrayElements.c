// Write a program in C to accept an integer array from the user and display the
// common factors of all the elements of the array.

#include<stdio.h>

void main()
{
	int N = 0;
	int arr[10];
	int index = 0;
	int element = 0;
	int i = 0;
	int largest = -65536;
	int flag = 0;
	int commonFactors[10];
	int cf_idx = 0;
	
	printf("Enter no. of elements: ");
	scanf("%d", &N);
	printf("Enter %d elements of the array\n", N);
	for(index=0; index<N; index++)
		scanf("%d", &arr[index]);
		
	// finding the largest element of the array
	for(index=0; index<N; index++)
	{
		element = arr[index];
		if(element >= largest)
			largest = element;
	}
	
	// finding the common elements of the elements
	for(i=2; i<largest; i++)
	{
		flag = 0;
		for(index=0; index<N; index++)
		{
			if(arr[index] % i != 0)
				flag = 1;
		}
		
		if(flag == 0)
			commonFactors[cf_idx++] = i;
	}
	
	// displaying the common factors of all elements
	printf("Common Factors of all elements are: \n");
	for(index=0; index<cf_idx; index++)
		printf("%d ", commonFactors[index]);
	
}
