// Write a program in C to reverse a given number using an user-defined function.

#include<stdio.h>

int getReverse(int number);

void main()
{
	int num = 0;
	int reverse = 0;

	printf("Enter any number: ");
	scanf("%d", &num);

	reverse = getReverse(num);
	printf("Reverse of %d = %d\n", num, reverse);
}

int getReverse(int number)
{
	int output = 0;
	int copy = number;

	while(copy != 0)
	{
		output = output * 10 + (copy % 10);
		copy = copy / 10;
	}

	return output;
}