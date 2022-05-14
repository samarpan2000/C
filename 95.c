// 95.Write a C program that reads an array (length 10), and replace the first element of the array by a give number and replace each subsequent position of the array by one-third value of the previous

#include <stdio.h>
void main()
{
    int arr[10];
    int i = 0;
    int num = 0;
    printf("enter the array elements \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("enter the number to be replaced by number in first element ");
    scanf("%d", &num);
    arr[0] = num;
    printf("\n the replaced element in first index of array is \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
}