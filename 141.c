// 142.	Write a C program to compute the sum of the elements of a given array of integers

#include <stdio.h>

int sumArr(int arr[1000], int size);

void main()
{
    int arr[1000];
    int size = 0;
    int i = 0;
    printf("enter the size of the array ");
    scanf("%d", &size);
    printf("enter the %d elements of the array \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the sum of element of array is %d ", sumArr(arr, size));
}

int sumArr(int arr[1000], int size)
{
    int sum = 0;
    int i = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
