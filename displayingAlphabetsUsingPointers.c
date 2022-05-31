// displaying all alphabets using pointer

#include<stdio.h>

void main()
{
	int uppercase_ascii = 65;
	int *p1;
	int lowercase_ascii = 97;
	int *p2;
	
	// displaying uppercase alphabets
	printf("All Uppercase Alphabets are: \n");
	p1 = &uppercase_ascii;
	while(*p1 != 91)
	{
		printf("%c ", (char)(*p1));
		(*p1)++;
	}
	printf("\n");
	
	// displaying lowercase alphabets
	printf("All Lowercase Alphabets are: \n");
	p2 = &lowercase_ascii;
	while(*p2 != 123)
	{
		printf("%c ", (char)(*p2));
		(*p2)++;
	}
	printf("\n");
}
