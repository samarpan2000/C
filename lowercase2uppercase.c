// Write a program in C to convert a string to uppercase.

#include<stdio.h>
#include<string.h>

void main()
{
	char inputString[100];
	char outputString[100];
	int index = 0;
	int o_idx = 0;
	int ascii = 0;
	
	printf("Enter any string: ");
	fgets(inputString, 100, stdin);
	
	for(index=0; index<strlen(inputString)-1; index++)
	{
		ascii = (int)inputString[index];
		
		// checking for uppercase
		if(ascii>=65 && ascii<=90)
			outputString[o_idx++] = inputString[index];
			
		// checking for lowercase
		else if(ascii>=97 && ascii<=122)
			outputString[o_idx++] = (char)(ascii-32);
			
		// checking for other characters
		else
			outputString[o_idx++] = inputString[index];
	}
	
	outputString[o_idx] = '\0';
	printf("Output String = %s\n", outputString);
}
