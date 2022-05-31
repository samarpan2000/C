// Write a program in C to display the reverse of a given string without using inbuilt library function.

#include<stdio.h>

int length(char arr[10]);

void main()
{
	char string[10];
	int i = 0;
	int j = 0;
	int mid = 0;
	char temp;

	printf("Enter any string: ");
	gets(string);

	// for even-lengthed string

	if(length(string)%2 == 0)
	{
		for(i=0,j=length(string)-1; i<j; i++,j--)
		{
			temp = string[j];
			string[j] = string[i];
			string[i] = temp;
		}

		printf("Reverse String = %s\n", string);
	}

	// for odd-lengthed string

	else
	{
		mid = 0 + (length(string)-1 - 0)/2;
		for(i=0,j=length(string)-1; i!=j; i++,j--)
		{
			string[i] = (char)((int)(string[i]) + (int)(string[j]));
			string[j] = (char)((int)(string[i]) - (int)(string[j]));
			string[i] = (char)((int)(string[i]) - (int)(string[j]));
		}

		printf("Reverse String = %s\n", string);
	}
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