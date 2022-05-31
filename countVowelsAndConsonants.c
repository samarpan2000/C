// Write a C program to find total no. of vowels and consonants in a given string.

#include<stdio.h>
#include<string.h>

void main()
{
	char input[30];
	int index = 0;
	char ch;
	int c_vowels = 0;
	int c_consonants = 0;
	
	printf("Enter any string: ");
	fgets(input, 30, stdin);
	
	for(index=0; index<strlen(input)-1; index++)
	{
		ch = input[index];
		
		// checking for lowercase vowels
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			c_vowels++;
			
		// checking for uppercase vowels
		else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			c_vowels++;
			
		// checking for whitespace
		else if(ch != ' ')
			c_consonants++;
	}
	
	printf("Count of vowels = %d\n", c_vowels);
	printf("Count of consonants = %d\n", c_consonants);
}
