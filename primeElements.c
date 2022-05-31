// Write a program in C to display all the prime nos. from an integer array.

#include<stdio.h>

int checkPrime(int number);

void main()
{
	int index = 0;
	int arr[10] = {10, 23, 17, 90, 65, 34, 28, 101, 190, 203};

	printf("Prime Numbers are: \n");
	for(index=0; index<10; index++)
	{
		if(checkPrime(arr[index]) == 1)
			printf("%d\t", arr[index]);
	}

	printf("\n");
}

int checkPrime(int number)
{
	int count_factors = 0;
	int i = 0;
	int output = 0;

	for(i=1; i<=number; i++)
	{
		if(number%i == 0)
		{
			count_factors++;
		}
	}
	if(count_factors == 2)
		output = 1;

	return output;
}