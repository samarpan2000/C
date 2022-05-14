// Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5
#include <stdio.h>
void main()
{
    int arr[5];
    int i = 0;
    printf("enter the array elements \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("element:-");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] < 5)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("index:-  ");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] < 5)
        {
            printf("%d ", i);
        }
    }
}
