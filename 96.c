/*
Write a C program to create an array of length n and fill the array elements with integer values.
 Now find the smallest value and its position within the array
*/

#include <stdio.h>

void main()
{

    int arr[1000];
    int choice = 0, min = 0;
    int i = 0, pos = 0;
    printf("enter the length of an array ");
    scanf("%d", &choice);

    for (i = 0; i < choice; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 1; i < choice; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("the samllest element is %d\n", min);
    printf("the position is %d", pos);
}