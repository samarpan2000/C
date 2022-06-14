// 143.	Write a C program to rotate the elements of a given array of integers (length 4) in left direction and return the new array.

#include <stdio.h>

void Arr(int arr[4]);

int main()
{
    int arr[1000];

    int i = 0;

    printf("enter the 4 elements of the array \n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    Arr(arr);

    return 0;
}

void Arr(int arr[4])
{

    int i = 0;
    int mid = 0;
    mid = arr[3] - arr[0] / 2;
    int output[4];
    int o_idx = 0;
    int j = 1;
    for (i = 0; i <=2; i++)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        j++;
    }
    

    for (i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
}
