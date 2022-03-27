#include <stdio.h>
int main()
{
    int arr[5] = {0}, i = 0;
    printf("enter the elements in an array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {

        if (arr[i] < 5)
        {
            printf("the position of the element is %d and its value is %d \n", i, arr[i]);
        }
    }

    return 0;
}