// Write a C program to sum of all numerical values (positive integers) embedded in a sentence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char arr[100];
    int i = 0, j = 0;
    int store = 0, sum = 0;
    printf("enter any sentence with numeric characters ");
    fgets(arr, 100, stdin);

    for (i = 0; i < strlen(arr) - 1; i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            sum = sum + ((int)arr[i]-48);
        }
    }
    printf("sum is %d ", sum);
}