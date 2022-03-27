/*Write a C program to read an array of length 6,
 change the first element by the last, the second element by the fifth
 and the third element by the fourth. Print the elements of the modified array.*/

#include <stdio.h>
int main()
{
    int arr[6] = {0}, output[6] = {0}, i = 0;
    printf("enter the elements \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" the modified array is \n");
    for (i = 0; i < 6; i++)
    {
        output[i] = arr[i];
    }
    for (i = 0; i < 6; i++)
    {
        arr[i] = arr[i] + output[5 - i];
        output[5 - i] = arr[i] - output[5 - i];
        arr[i] = arr[i] - output[5 - i];
    }
    for (i = 0; i < 6; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}
