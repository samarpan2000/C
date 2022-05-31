// Write a C program to search a particular element in a given array.

#include<stdio.h>

void main()
{
	int searchKey = 0;
	int index = 0;
	int flag = 0;

	int input_array[] = {12, 2, 90, 54, 65, 43};
	printf("Enter element to be searched: ");
	scanf("%d", &searchKey);

	// searching
	for(index=0; index<6; index++)
	{
		if(input_array[index] == searchKey)
		{
			flag = 1;
			printf("%d is present in index number %d\n", searchKey, index);
			break;
		}
		else
			continue;
	}

	if(flag == 0)
		printf("%d is not found in the array\n", searchKey);
}