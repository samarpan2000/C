#include<stdio.h>
#include<math.h>

void main()
{
	int num = 0;
	int n = 0;
	int copy1 = 0;
	int copy2 = 0;
	int sum = 0;

	printf("Enter any number: ");
	scanf("%d", &num);

	copy1 = num;
	copy2 = num;

	while(copy1 != 0)
	{
		n++;
		copy1 = copy1 / 10;
	}

	while(copy2 != 0)
	{
		sum = sum + pow((copy2%10),n);
		copy2 = copy2 / 10;
	}

	if(sum == num)
		printf("%d is an Armstrong Number\n", num);
	else
		printf("%d is not an Armstrong Number\n", num);
}