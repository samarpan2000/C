// replacing more than one blank by a single blank in an input string

#include<stdio.h>
#include<string.h>

void main()
{
	char input[100];
	char output[100];
	int o_idx = 0;
	int index = 0;
	
	printf("Enter any string: ");
	fgets(input, 100, stdin);
	
	for(index=0; index<strlen(input)-1; index++)
	{
		if(index == 0)
			output[o_idx++] = input[index];
			
		else if(input[index] != ' ')
			output[o_idx++] = input[index];
			
		else if(input[index]==' ')
		{
			if(output[o_idx-1] != ' ')
				output[o_idx++] = input[index];
			
			else
				continue;
		}
	}
	
	output[o_idx] = '\0';
	printf("Output String: %s\n", output);
}
