// Write a C program to take a number from the user and display the sum of its digits.

#include<stdio.h>

void main()
{
	int number = 0;
	int copy = 0;
	int sum = 0;

	printf("Enter any number: ");
	scanf("%d", &number);
	copy = number;

	while(copy!=0)
	{
		sum = sum + (copy%10);
		copy = copy / 10;
	}

	printf("Sum of digits of %d = %d\n", number, sum);
}