// Write a C program to accept two integer matrices and perform the following operations:
// 1. Matrix Addition
// 2. Matrix Subtraction
// 3. Matrix Multiplication
// 4. Transpose of a Matrix
// 5. Determinant of a 3x3 matrix
// 6. Check if any of the matrices is Sparse or Dense.

#include<stdio.h>
#include<stdlib.h>

void display(int matrix[10][10], int rows, int cols);
int isSparse(int matrix[10][10], int rows, int cols);
int isDense(int matrix[10][10], int rows, int cols);

void main()
{
	int r1 = 0;
	int c1 = 0;
	int r2 = 0;
	int c2 = 0;
	int myMatrix1[10][10];
	int myMatrix2[10][10];
	int output[10][10];
	int i = 0;
	int j = 0;
	int k = 0;
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;
	int determinant = 0;
	int choice = 0;
	int choice1 = 0;
	int choice2 = 0;
	int choice3 = 0;
	

	printf("Enter no. of rows of Matrix1: ");
	scanf("%d", &r1);
	printf("Enter no. of columns of Matrix1: ");
	scanf("%d", &c1);
	printf("Enter no. of rows of Matrix2: ");
	scanf("%d", &r2);
	printf("Enter no. of columns of Matrix2: ");
	scanf("%d", &c2);

	printf("Enter %d elements of Matrix1...\n", (r1*c1));
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
			scanf("%d", &myMatrix1[i][j]);
	}

	printf("Enter %d elements of Matrix2...\n", (r2*c2));
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
			scanf("%d", &myMatrix2[i][j]);
	}

	printf("Press 1 for Matrix Addition\n");
	printf("Press 2 for Matrix Subtraction\n");
	printf("Press 3 for Matrix Multiplication\n");
	printf("Press 4 for Transposing a matrix\n");
	printf("Press 5 for Finding Determinant of a matrix\n");
	printf("Press 6 to check if matrix is Sparse or Dense\n");
	printf("Press 7 to exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
				if(r1!=r2 && c1!=c2)
					printf("Matrix Addition is not possible\n");

				else if(r1!=r2 || c1!=c2)
					printf("Matrix Addition is not possible\n");

				else
				{
					for(i=0; i<r1; i++)
					{
						for(j=0; j<c2; j++)
							output[i][j] = myMatrix1[i][j] + myMatrix2[i][j];
					}

					// displaying the summation matrix
					printf("Summation Matrix is:- \n");
					display(output, r1, c2);
				}
				break;

			case 2:
					if(r1!=r2 && c1!=c2)
					printf("Matrix Subtraction is not possible\n");

				else if(r1!=r2 || c1!=c2)
					printf("Matrix Subtraction is not possible\n");

				else
				{
					for(i=0; i<r1; i++)
					{
						for(j=0; j<c2; j++)
							output[i][j] = myMatrix1[i][j] - myMatrix2[i][j];
					}

					// displaying the summation matrix
					printf("Difference Matrix is:- \n");
					display(output, r1, c2);
				}
				break;

			case 3:
					if(c1 != r2)
						printf("Matrix Multiplication is not possible\n");

					else
					{
						// making each element of output matrix = 0
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c2; j++)
								output[i][j] = 0;
						}


						for(i=0; i<r1; i++)
						{
							for(j=0; j<c2; j++)
							{
								for(k=0; k<c1; k++)
								{
									output[i][j] += myMatrix1[i][k] * myMatrix2[k][j];
								}
							}
						}

						// displaying the product matrix
						printf("Product Matrix is:- \n");
						display(output, r1, c2);
					}
					break;

			case 4:
					printf("Press 1 to find transpose of Matrix1\n");
					printf("Press 2 to find transpose of Matrix2\n");
					printf("Enter your choice: ");
					scanf("%d", &choice1);

					switch(choice1)
					{
						case 1:
								printf("Transpose of Matrix1 is:- \n");
								for(i=0; i<r1; i++)
								{
									for(j=0; j<c1; j++)
										printf("%d ", myMatrix1[j][i]);

									printf("\n");
								}
								break;

						case 2:
								printf("Transpose of Matrix2 is:- \n");
								for(i=0; i<r2; i++)
								{
									for(j=0; j<c2; j++)
										printf("%d ", myMatrix2[j][i]);

									printf("\n");
								}
								break;								
					}
					break;

			case 5:
					printf("Press 1 to find the determinant of Matrix1\n");
					printf("Press 2 to find the determinant of Matrix2\n");
					printf("Enter your choice: ");
					scanf("%d", &choice2);

					switch(choice2)
					{
						case 1:
								d1 = 0;
								d2 = 0;
								d3 = 0;
								determinant = 0;

								d1 = myMatrix1[0][0] * (myMatrix1[1][1]*myMatrix1[2][2] - myMatrix1[2][1]*myMatrix1[1][2]);

								d2 = myMatrix1[0][1] * (myMatrix1[1][0]*myMatrix1[2][2] - myMatrix1[2][0]*myMatrix1[1][2]);

								d3 = myMatrix1[0][2] * (myMatrix1[1][0]*myMatrix1[2][1] - myMatrix1[2][0]*myMatrix1[1][1]);

								determinant = d1 - d2 + d3;
								printf("Determinant of Matrix1 = %d\n", determinant);
								break;

						case 2:
								d1 = 0;
								d2 = 0;
								d3 = 0;
								determinant = 0;
								
								d1 = myMatrix2[0][0] * (myMatrix2[1][1]*myMatrix2[2][2] - myMatrix2[2][1]*myMatrix2[1][2]);

								d2 = myMatrix2[0][1] * (myMatrix2[1][0]*myMatrix2[2][2] - myMatrix2[2][0]*myMatrix2[1][2]);

								d3 = myMatrix2[0][2] * (myMatrix2[1][0]*myMatrix2[2][1] - myMatrix2[2][0]*myMatrix2[1][1]);

								determinant = d1 - d2 + d3;
								printf("Determinant of Matrix2 = %d\n", determinant);
								break;
					}
					break;

			case 6:
					printf("Press 1 to check if Matrix1 is Sparse or Dense\n");
					printf("Press 2 to check if Matrix2 is Sparse or Dense\n");
					printf("Enter your choice: ");
					scanf("%d", &choice3);

					switch(choice3)
					{
						case 1:
								if(isSparse(myMatrix1, r1, c1) == 1)
									printf("Matrix1 is Sparse Matrix\n");

								else if(isDense(myMatrix1, r1, c1) == 1)
									printf("Matrix1 is Dense Matrix\n");

								break;

						case 2:
								if(isSparse(myMatrix2, r2, c2) == 1)
									printf("Matrix2 is Sparse Matrix\n");

								else if(isDense(myMatrix2, r2, c2) == 1)
									printf("Matrix2 is Dense Matrix\n");

								break;
					}
					break;

			case 7:
					printf("Exiting from the program\n");
					exit(0);
					break;

			default:
					printf("You have entered a wrong choice\n");


	}
}

void display(int matrix[10][10], int rows, int cols)
{
	int i = 0;
	int j = 0;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
			printf("%d ", matrix[i][j]);

		printf("\n");
	}
}

int isSparse(int matrix[10][10], int rows, int cols)
{
	int count = 0;
	int output = 0;
	int i = 0;
	int j = 0;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(matrix[i][j] == 0)
				count++;
		}
	}

	if(count >= (rows*cols)/2)
		output = 1;

	return output;

}

int isDense(int matrix[10][10], int rows, int cols)
{
	int count = 0;
	int output = 0;
	int i = 0;
	int j = 0;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(matrix[i][j] == 0)
				count++;
		}
	}

	if(count < (rows*cols)/2)
		output = 1;

	return output;
}