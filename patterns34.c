/*
	* * * * * * * * *
	* * * *   * * * *
	* * *       * * *
	* *           * *
	*               *
	* *           * *
	* * *       * * *
	* * * *   * * * *
	* * * * * * * * *
	
*/

#include<stdio.h>

void main()
{
	int i, j, k = 0;
	
	// upper half
	for(i=5; i>=1; i--)
	{
		// left triangle
		for(j=1; j<=i; j++)
			printf("* ");
			
		// right triangle
		for(j=i; j>=1; j--)
			printf();
		
	}
	
	// lower half
	
}
