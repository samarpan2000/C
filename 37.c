//Write a C program to read and print the elements of an array of length 7, before print replace every negative number with 100
#include <stdio.h>
void main()
{
    int arr[7];
    int i = 0;
    printf("enter the array elements \n");

    for (i = 0 ; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 7; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[i] = 100;
        }
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}