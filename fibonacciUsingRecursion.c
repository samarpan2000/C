// Generating N'th Fibonacci Term using Recursion

#include<stdio.h>

int fib(int term);

void main()
{
	int number = 0;
	
	printf("Enter term number: ");
	scanf("%d", &number);
	printf("%d'th fibonacci term = %d\n", number, fib(number));
}

int fib(int term)
{
	// base case
	if(term==1)
		return 0;
		
	else if(term==2)
		return 1;
		
	else
		return fib(term-1) + fib(term-2);
}
