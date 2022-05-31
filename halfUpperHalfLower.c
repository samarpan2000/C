// Write a C program to modify a given string in such a way that the first half of the characters
// is in uppercase and the last half of the characters is in lowercase.
// IP: "education"
// OP: "EDUCation"

#include<stdio.h>

int length(char arr[10]);

void main()
{
	char string[30];
	int i = 0;
	int mid = 0;

	printf("Enter any string: ");
	gets(string);

	mid = 0 + (length(string)-1-0)/2;
	for(i=0; i<mid; i++)
		string[i] = (char)((int)(string[i]) - 32);

	printf("Modified String: %s\n", string);
}


int length(char arr[10])
{
	int i = 0;
	int len = 0;

	while(arr[i] != '\0')
	{
		len++;
		i++;
	}

	return len;
}
