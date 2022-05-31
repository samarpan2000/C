// write a c program by using a function to determine the largest number among the four
// and take user input one on each line.

#include<stdio.h>

void main()
{
	int num1, num2, num3, num4 = 0;
	int large1, large2 = 0;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("Enter third number: ");
	scanf("%d", &num3);
	printf("Enter fourth number: ");
	scanf("%d", &num4);
	
	// finding the largest element from first two integers
	if(num1 > num2)
		large1 = num1;
	else
		large1 = num2;
		
	// finding the largest element from last two integers
	if(num3 > num4)
		large2 = num3;
	else
		large2 = num4;
		
	// checking which number is larger between the intermediates
	if(large1 > large2)
		printf("%d is the largest number\n", large1);
	else
		printf("%d is the largest number\n", large2);
	
	
}
