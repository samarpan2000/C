#include <stdio.h>
int main()
{
    int num = 0, i = 0;

    printf("enter any integer of your choice ");
    scanf("%d", &num);
    printf("ALL THE DIVISOR OF THE INTEGER %d IS ", num);
    for (i = 1; i <= num; i++)
    {

        if (num % i == 0)
        {
            printf(" %d ", i);
        }
    }

    return 0;
}