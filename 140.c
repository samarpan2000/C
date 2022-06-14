// 140.	Write a C program to check a given array of integers of length 1 or more and return true if the first element and the last element are equal in the given array

#include <stdio.h>

int checkArr(int arr[1000], int size);

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

    if (checkArr(arr, size) == 1)
    {
        printf("true");
    }
    else
        printf("false");
}

int checkArr(int arr[1000], int size)
{
    int lastElem = 0;
    int firstElem = 0;

    lastElem = arr[size - 1];
    firstElem = arr[0];

    if (firstElem == lastElem)
    {
        return 1;
    }
    else
        return 0;
}
