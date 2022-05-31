// Write a program in C to check whether a character is Hexadecimal Digit or not.

#include<stdio.h>

void main()
{
	char input;
	int ascii = 0;
	
	printf("Enter any character: ");
	scanf("%c", &input);
	ascii = (int)input;
	
	if((ascii>=48 && ascii<=57) || (ascii>=65 && ascii<=70))
		printf("TRUE");
		
	else
		printf("FALSE");
}
