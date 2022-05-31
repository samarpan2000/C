// Write a C program to implement Binary Search in a given integer array.

#include<stdio.h>

void displayArray(int arr[], int length);
void sortArray(int arr[], int length);
int returnMid(int lb, int ub);

void main()
{
	int arr[] = {17, 32, 10, 90, 54, 78, 9};
	int lb = 0;
	int ub = 6;
	int mid = 0;
	int searchKey = 0;
	int flag = 0;

	printf("Enter search key: ");
	scanf("%d", &searchKey);

	sortArray(arr, 7);

	printf("Input Array(Sorted): \n");
	displayArray(arr, 7);

	while(lb <= ub)
	{
		mid = returnMid(lb, ub);

		// checking case 1
		if(searchKey == arr[mid])
		{
			flag = 1;
			printf("%d is found in index number %d\n", searchKey, mid);
			break;
		}

		// checking case 2
		else if(searchKey < arr[mid])
		{
			ub = mid - 1;
		}

		// checking for case 3
		else if(searchKey > arr[mid])
		{
			lb = mid + 1;
		}
	}
	
	if(flag == 0)
		printf("%d is not found !!!\n", searchKey);
}


void displayArray(int arr[], int length)
{
	int i = 0;

	for(i=0; i<length; i++)
		printf("%d\t", arr[i]);

	printf("\n");	
}


void sortArray(int arr[], int length)
{
	int i,j,temp = 0;

	for(i=0; i<length; i++)
	{
		for(j=0; j<(length-i-1); j++)
		{
			if(arr[j] >= arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int returnMid(int lb, int ub)
{
	return (lb + (ub-lb)/2);	
}