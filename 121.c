// Write a C program to count the number of two 5's are next to each other in an array of integers.
// Also count the situation where the second 5 is actually a 6

#include <stdio.h>

int countFivesArr(int arr[1000], int size);
int countSixesArr(int arr[1000], int size);

void main()
{
    int i = 0;
    int size = 0;
    int arr[1000];

    printf("enter the size of the array ");
    scanf("%d", &size);
    printf("enter %d elements\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the number of two 5's next to each other is %d ", countFivesArr(arr, size));
    printf("\nthe number of  second 5 is actually a 6 is %d ", countSixesArr(arr, size));
}

int countFivesArr(int arr[1000], int size)
{
    int i = 0;
    int countFive = 0;

    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] == 5 && arr[i + 1] == 5)
        {
            countFive++;
        }
    }

    return countFive;
}

int countSixesArr(int arr[1000], int size)
{
    int i = 0;
    int countSix = 0;

    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] == 5 && arr[i + 1] == 6)
        {
            countSix++;
        }
    }
    return countSix;
}
