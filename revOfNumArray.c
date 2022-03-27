#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    printf("\n THE NUMBER BEFORE REVERSE ORDER IS \n");
    for (i = 0; i <= 5; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n THE NUMBER AFTER  REVERSE ORDER IS \n");
    for (i = 5; i >=0; i--)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}