#include <stdio.h>
int main()
{
    int arr[100] = {0}, numChoice = 0, i = 0, max = -65536, l_index = 0;
    printf("enter how many  elements you want to put \n");
    scanf("%d", &numChoice);
    printf("ENTER THE ELEMENTS \n");
    for (i = 0; i < numChoice; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < numChoice; i++)
    {
        if (i == 0)
        {
            printf("array ---> ");
        }

        printf(" %d ", arr[i]);

        if (i == (numChoice-1))
        {
            printf("\n");
        }
    }

    for (i = 0; i < numChoice; i++)
    {
        if (i == 0)
        {
            printf("index ---> ");
        }

        printf(" %d ", i);
        if (arr[i] > max)
        {
            max = arr[i];
            l_index = i;
        }
    }
    printf("\nthe largest element is %d \n", max);
    printf(" the index is %d \n", l_index);

    return 0;
}