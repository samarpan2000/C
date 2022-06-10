// 120.	Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere
#include <stdio.h>
int checkArr(int arr[1000], int length);
void main()
{
    int i = 0;
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
        printf("the number 1,2,3 appears\n");
    }
    else if (checkArr(arr, size) == 0)
    {
        printf("not appears");
    }
}
int checkArr(int arr[1000], int length)
{
    int idx = 0;
    int count=0;
    
    for (idx = 0; idx <length-1; idx++)
    {

        if (arr[idx] == 1 && arr[idx + 1] == 2 && arr[idx + 2] == 3)
        {
            return 1;
        }

    }
    return 0;


}