#include<stdio.h>

void main()
{
	int number = 0;
	int i = 0;
	int countFactors = 0;

	printf("Enter number: ");
	scanf("%d", &number);

	for(i=1; i<=number; i++)
	{
		if(number%i == 0)
		{
			countFactors++;
		}
	}

	if(countFactors == 2)
		printf("%d is a Prime Number\n", number);
	else
		printf("%d is not a Prime Number\n", number);
}