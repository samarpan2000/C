// display each word of sentence in a newline

#include<stdio.h>
#include<string.h>

void main()
{
	char input[100];
	char modifiedInput[101];
	int m_idx = 0;
	int index = 0;
	char substring[50];
	int s_idx = 0;
	
	printf("Enter any sentence: ");
	fgets(input, 100, stdin);
	printf("Length = %d\n", strlen(input));
	
	for(index=0; index<strlen(input); index++)
		modifiedInput[m_idx++] = input[index];
		
	modifiedInput[m_idx] = '-';
	
	for(index=0; index<strlen(modifiedInput); index++)
	{
		if(modifiedInput[index] != ' ')
			substring[s_idx++] = modifiedInput[index];
		
		else if((modifiedInput[index]==' ') || (modifiedInput[index]=='-'))
		{
			substring[s_idx] = '\0';
			s_idx = 0;
			printf("Extracted Word = %s\n", substring);
		}
	}
}
