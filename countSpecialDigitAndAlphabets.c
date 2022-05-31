// Write a C program to count total number of alphabets, special characters and digits in a 
// given string. 

#include<stdio.h>
#include<string.h>

void main()
{
	char input[30];
	int index = 0;
	char ch;
	//int c_alpha = 0;
	//int c_special = 0;
	int c_digit = 0;
	int ascii = 0;
	
	printf("Enter any string: ");
	fgets(input, 30, stdin);
	
	for(index=0; index<strlen(input)-1; index++)
	{
		ch = input[index];
		ascii = (int)ch;
		
		// checking for uppercase alphabets
	//	if(ascii>=65 && ascii<=90)
	//		c_alpha++;
			
		// checking for lowercase alphabets
	//	else if(ascii>=97 && ascii<=122)
		//	c_alpha++;
			
		// checking for digits
		 if(ascii>=48 && ascii<=57)
			c_digit++;
			
		// checking for special characters
	//	else if(ascii != 32)
		//	c_special++;
	}
	
//	printf("Count of alphabets = %d\n", c_alpha);
	printf("Count of digits = %d\n", c_digit);
	//printf("Count of special characters = %d\n", c_special);
}
