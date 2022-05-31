// nearly prime number program

#include<stdio.h>

int isPrime(int number);

void main()
{
	int number = 0;
	int factors[10];
	int f_idx = 0;
	int i = 0;
	int j = 0;
	int f1, f2 = 0;
	int flag = 0;
	
	printf("Enter any number: ");
	scanf("%d", &number);
	
	for(i=2; i<number; i++)
	{
		if(number % i == 0)
			factors[f_idx++] = i;
	}
	
	for(i=0; i<f_idx-1; i++)
	{
		for(j=i+1; j<f_idx; j++)
		{
			f1 = factors[i];
			f2 = factors[j];
			if(isPrime(f1)==1 && isPrime(f2)==1)
			{
				if(f1*f2 == number)
				{
					printf("%d is a nearly prime number\n", number);
					flag = 1;
					break;
				}
			}
		}
		
		if(flag==1)
			break;
	}
	
	if(flag == 0)
		printf("%d is not a nearly prime number\n", number);
}

int isPrime(int number)
{
	int countFactors = 0;
	int i = 0;
	int output = 0;
	
	for(i=1; i<=number; i++)
	{
		if(number % i == 0)
			countFactors++;
	}
	
	if(countFactors == 2)
		output = 1;
		
	return output;
}
