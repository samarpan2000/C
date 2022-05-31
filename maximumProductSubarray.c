//  Write a program in C to find maximum product subarray in a given array.

#include<stdio.h>

void main()
{
	int arr[8] = { -4, 9, -7, 0, -15, 6, 2, -3};
	int i, j, k = 0;
	int maximumProduct = -1;
	int prod = 1;
	int maxStarting = -1;
	int maxEnding = -1;
	
	// generating all possible subarrays
	for(i=0; i<8; i++)
	{
		for(j=i; j<8; j++)
		{
			prod = 1;
			for(k=i; k<=j; k++)
				prod = prod * arr[k];
				
			if(prod >= maximumProduct)
			{
				maximumProduct = prod;
				maxStarting = i;
				maxEnding = j;
			}
		}
	}
	
	// display the maximum product and its corresponding subarray
	printf("Maximum Product = %d\n", maximumProduct);
	printf("Maximum Product Subarray = ");
	for(i=maxStarting; i<=maxEnding; i++)
		printf("%d ", arr[i]);
}

 
 
