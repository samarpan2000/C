#include <stdio.h>
int main()
{
    int arr[7] = {0}, i = 0;
    printf("enter the elements \n");

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" the elements after tripling of the first element starting from the second element is \n");
    for (i = 0; i < 7; i++)
    {
        arr[i + 1] = 3 * arr[i];
        printf(" %d ", arr[i]);
    }

    return 0;
}
