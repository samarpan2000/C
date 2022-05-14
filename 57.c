// 57.Write a C program to copy a given string into another and count the number of characters copied.
#include <stdio.h>
#include <string.h>
void main()
{
    char arr[100], arr1[100];
    int i = 0, count = 0;
    printf("enter the string  \n");
    fgets(arr, 100, stdin);

    for (i = 0; i < strlen(arr) - 1; i++)
    {
        arr1[i] = arr[i];
        count++;
    }

    printf("%d ", count);

}