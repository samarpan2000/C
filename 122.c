// 122.	Write a C program to check if a triplet is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triplet.

#include <stdio.h>
int checkArr(int arr[1000], int length);
void main()
{
    int i = 0, j = 0;
    int arr[1000];
    int size = 0;

    printf("enter the array size ");
    scanf("%d", &size);
    printf("enter %d elements \n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (checkArr(arr, size) == 1)
    {
        printf("triplet is present");
    }
    else if (checkArr(arr, size) == 0)
    {
        printf("triplet not present");
    }
}
int checkArr(int arr[1000], int length)
{
    int i = 0;
    int j = 0;
    int count = 0;
    for (i = 0; i < length - 1; i++)//1 2 3 4 5 6
    {                               //0 1 2 3 4 5
        for (j = 1; j < length - 1; j++)
        {
            if (arr[i] == arr[j] && arr[i] == arr[j + 1])
            {
                return 1;
            }
        }
    }
    return 0;
}