// Write a program in C to replace the spaces of a string with a specific character.

#include<stdio.h>
#include<string.h>

void main()
{
	char inputString[100];
	char outputString[100];
	int index = 0;
	int o_idx = 0;
	char ch;
	
	printf("Enter any string: ");
	fgets(inputString, 100, stdin);
	
	printf("Enter replacing character: ");
	scanf("%c", &ch);
	
	for(index=0; index<strlen(inputString)-1; index++)
	{
		if(inputString[index] == ' ')
			outputString[o_idx++] = ch;
		
		else
			outputString[o_idx++] = inputString[index];
	}
	
	outputString[o_idx] = '\0';
	printf("Output String = %s\n", outputString);
}
