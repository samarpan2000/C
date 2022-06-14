//144.	Write a C program to reverse a given array of integers and length 5


#include <stdio.h>

void Arr(int arr[5]);

int main()
{
    int arr[5];

    int i = 0;

    printf("enter the 5 elements of the array \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    Arr(arr);

    return 0;
}

void Arr(int arr[5])
{

    int i = 0;

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
