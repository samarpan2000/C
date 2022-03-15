#include <stdio.h>
int main()
{
    int num = 0, i = 0, sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter any integer ");
        scanf("%d", &num);
        if (num % 2 != 0)
        {

            sum = sum + num;
        }
    }

    printf(" the sum of odd integers is %d \n", sum);

    return 0;
}