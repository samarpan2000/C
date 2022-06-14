// 146.	Write a C program to create a new array taking the first and last elements of a given array of integers and length one or more
#include <stdio.h>

void Arr(int arr[1000], int size);

void main()
{
    int arr[1000];
    int size = 0;
    int i = 0;
    printf("enter the size of the array one or more ");
    scanf("%d", &size);
    printf("enter the %d elements of the array \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    Arr(arr, size);
}

void Arr(int arr[1000], int size)
{
    int i = 0;
    int output[2];
    output[0] = arr[0];
    output[1] = arr[size - 1];
    for (i = 0; i < 2; i++)
    {
        printf("%d ", output[i]);
    }
}
