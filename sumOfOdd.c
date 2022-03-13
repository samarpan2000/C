#include <stdio.h>
int main()
{
    int num = 0, sumOfOdd = 0, i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter the value of  integer ");
        scanf("%d", &num);
        if (num % 2 != 0)
        {
            sumOfOdd = sumOfOdd + num;
        }
        else
            continue;
    }
    printf(" the sum of odd integers among the given integers is %d ", sumOfOdd);

    return 0;
}