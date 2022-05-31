#include<stdio.h>

void main()
{
	int num = 0;
	printf("Enter any number: ");
	scanf("%d", &num);

	if(num>0)
	{
		if(num%2==0)
			printf("%d is Positive Even.\n", num);

		else
			printf("%d is Positive Odd.\n", num);
	}
	else if(num<0)
	{
		if(num%2==0)
			printf("%d is Negative Even.\n", num);

		else
			printf("%d is Negative Odd.\n", num);
	}
}