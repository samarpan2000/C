#include <stdio.h>
int main()
{
    int arr[5] = {0}, correctPassword[5] = {0}, i = 0;
    printf("\n enter the password digits followed by enter (can take upto 5 digits) \n");
    printf("\n example ----> 1 \n");
    printf("         ----> 2 \n");
    printf("         ----> 3 \n");
    printf("         ----> and so on \n");
    for (i = 0; i < 5; i++)
    {
        correctPassword[i] = i + 1;
    }
looping:
    printf("\n ENTER password:-\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] != correctPassword[i])
        {
            printf(" WRONG PASSWORD ");
            goto looping;
        }

        else
        {
            printf(" CORRECT PASSWORD ");
            break;
        }
    }
    return 0;
}