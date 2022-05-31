// Write a program in C to find the largest and smallest word in a string.

#include<stdio.h>
#include<string.h>

void initialise(char arr[30], int length);
void copy(char source[30], char dest[30], int length);

void main()
{
	char inputString[30];
	char word[10];
	int index = 0;
	int space = 0;
	int start_index = 0;
	int stop_index = 0;
	int w_idx = 0;
	int i = 0;
	int smallest = 65535;
	int largest = -65536;
	int length = 0;
	char smallest_word[30];
	char largest_word[30];
	
	
	printf("Enter any string: ");
	fgets(inputString, 30, stdin);
	
	start_index = 0;
	for(index=0; index<strlen(inputString)-1; index++)
	{
		length = 0;
		if(inputString[index] == ' ')
		{
			space = index;
			stop_index = index-1;
			
			// forming the word
			initialise(word, 10);
			for(i=start_index; i<=stop_index; i++)
				word[w_idx++] = inputString[i];
			
			word[w_idx] = '\0';
			length = strlen(word);
			
			// finding the smallest word
			if(length <= smallest)
			{
				smallest = length;
				copy(word, smallest_word, length);
			}
			
			// finding the largest word
			else if(length >= largest)
			{
				largest = length;
				copy(word, largest_word, length);
			}
			
			start_index = space+1;
		}
	}
	
	printf("Smallest Word = %s\n", smallest_word);
	printf("Largest Word = %d\n", largest_word);
}

void initialise(char arr[30], int length)
{
	int index = 0;
	
	for(index=0; index<length; index++)
		arr[index] = '0';	
}

void copy(char source[30], char dest[30], int length)
{
	int index = 0;
	int d_idx = 0;
	
	initialise(dest, length);
	for(index=0; index<length; index++)
		dest[d_idx++] = source[index];
		
	dest[d_idx] = '\0';
}
