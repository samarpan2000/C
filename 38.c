//Write a C program to read and print the elements of an array of length 7, before print, put the triple of the previous position starting from the second position of the array

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

    for (i = 1; i < 7; i++)
    {
      arr[i]=3*(arr[i-1]);
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}