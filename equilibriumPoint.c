/*Write a C program to find out the equilibrium point in an array.
An equilibrium point in an
array is that index number whose left subarray elements summation
is equal to right subarray elements summation.*/

#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    int leftsubArr = 0, rightsubArr = 0;
    int arr[6] = {1, 2, 2, 1, 4, 6};
    for (i = 1; i < 5; i++)
    {
        leftsubArr = 0;
        rightsubArr = 0;
        // finding left subarr sum
        for (j = 0; j < i; j++)
        {
            leftsubArr += arr[j];
        }
        for (j = i + 1; j< 6; j++)
        {
            rightsubArr += arr[j];
            if (leftsubArr == rightsubArr)
            {
                printf("equilibrium point %d\n ",i);
            }
        }
    }
}

