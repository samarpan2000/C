// Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>

void main()
{
	int rows, cols = 0;
	int matrix[10][10];
	int i, j = 0;
	int largestOneRow = -1;
	int countOnes = 0;
	int largest = -1;
	
	printf("Enter no. of rows: ");
	scanf("%d", &rows);
	printf("Enter no. of columns: ");
	scanf("%d", &cols);
	
	printf("Enter %d elements of the matrix\n", (rows*cols));
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
			scanf("%d", &matrix[i][j]);
	}
	
	for(i=0; i<rows; i++)
	{
		countOnes = 0;
		for(j=0; j<cols; j++)
		{
			if(matrix[i][j] == 1)
				countOnes++;
		}
		
		if(countOnes >= largest)
		{
			largest = countOnes;
			largestOneRow = i;
		}
	}
	
	// displaying the row with largest number of ones
	printf("Row with largest ones = ");
	for(j=0; j<cols; j++)
		printf("%d ", matrix[largestOneRow][j]);
		
	printf("\n");
}
