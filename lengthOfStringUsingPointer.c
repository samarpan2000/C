// finding length of a given string using pointer

#include<stdio.h>

void main()
{
	char arr[50];
	char *p;
	int len = 0;
	
	printf("Enter any string: ");
	fgets(arr, 50, stdin);
	
	p = arr;
	
	while(*p != '\n')
	{
		len++;
		p++;
	}
	
	printf("Length of given string = %d\n", len);
}
