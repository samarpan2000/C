/* 
	Write a C program to store the first 20 terms of the Fibonacci Series in an array
	and display it. A Fibonacci Series is a series which looks like: 0, 1, 1, 2, 3, 5, 8, 13
	and so on ...
*/

#include<stdio.h>

void main()
{
	int output[20];
	int term = 0;
	int o_idx = 0;
	int index = 0;
	
	output[o_idx] = 0;
	output[++o_idx] = 1;
	
	for(term=2; term<20; term++)
		output[++o_idx] = output[term-1] + output[term - 2];
		
	// displaying the Fibonacci Array
	printf("Fibonacci Array upto 20 terms: \n");
	for(index=0; index<=o_idx; index++)
		printf("%d ", output[index]);
}
