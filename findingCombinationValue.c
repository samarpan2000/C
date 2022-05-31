// finding value of combination using recursion

#include<stdio.h>

int fact(int number);

void main()
{
	int N, R = 0;
	
	printf("Enter value of N: ");
	scanf("%d", &N);
	printf("Enter value of R: ");
	scanf("%d", &R);
	printf("Value of %dC%d = %d\n", N, R, (fact(N)/(fact(R)*fact(N-R))));
}

int fact(int number)
{
	// base case - 1
	if(number==0)
		return 1;
		
	// base case - 2
	else if(number==1)
		return 1;
		
	else
		return number*fact(number-1);
}
