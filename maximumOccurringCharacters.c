// Write a C program to find maximum occurring character in a string.

#include<stdio.h>
#include<string.h>

int isPresent(char arr[30], int length, char element);
void initialize(char arr[30], int length);

void main()
{
	char input[30];
	int index = 0;
	char unique[30];
	int freq[30];
	int u_idx = 0;
	int f_idx = 0;
	int count = 0;
	int i = 0;
	int max = -65536;
	char ch;
	
	printf("Enter any string: ");
	fgets(input, 30, stdin);
	
	// initializing the unique array for first time use
	initialize(unique, strlen(input)-1);
	
	// forming the unique array
	for(index=0; index<strlen(input)-1; index++)
	{
		ch = input[index];
		if(isPresent(unique, strlen(input)-1, ch) == 0)
			unique[u_idx++] = ch;
	}
	
	// forming the frequency array
	for(index=0; index<u_idx; index++)
	{
		count = 0;
		for(i=0; i<strlen(input)-1; i++)
		{
			if(unique[index] == input[i])
				count++;
		}
		
		freq[f_idx++] = count;
	}
	
	// calculating the maximum frequency
	for(index=0; index<f_idx; index++)
	{
		if(freq[index] >= max)
			max = freq[index];
	}
	
	// displaying the maximum occurring characters
	printf("Maximum Occurring characters are: ");
	for(index=0; index<f_idx; index++)
	{
		if(freq[index] == max)
			printf("%c ", unique[index]);
	}
	printf("\n");
}

int isPresent(char arr[30], int length, char element)
{
	int index = 0;
	int output = 0;
	
	for(index=0; index<length; index++)
	{
		if(arr[index] == element)
		{
			output = 1;
			break;
		}
	}
	
	return output;
}

void initialize(char arr[30], int length)
{
	int index = 0;
	
	for(index=0; index<length; index++)
		arr[index] = '0';
}
