// 145.	Write a C program to create a new array containing the middle elements from the two given arrays of integers, each length 5.

#include <stdio.h>

void Arr(int arr1[5], int arr2[5]);

int main()
{
    int arr1[5];
    int arr2[5];
    int i = 0;

    printf(" enter the 5 elements of the first array \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\n enter the 5 elements of the second array \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    Arr(arr1, arr2);

    return 0;
}

void Arr(int arr1[5], int arr2[5])
{

    int i = 0;
    int mid1 = 0;
    int mid2 = 0;

    mid1 = (4 - 0) / 2;
    mid2 = (4 - 0) / 2;

    printf("%d, %d", arr1[mid1], arr2[mid2]);
}
