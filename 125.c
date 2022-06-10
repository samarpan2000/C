// 125.	Write a C program to to test whether a given non-negative number is a multiple of 13 or it is one more than a multiple of 13
#include <stdio.h>

int checkMultiple(int num);

int main()
{

    int num1 = 0;

    printf("enter any non negative number ");
    scanf("%d", &num1);

    if (checkMultiple(num1) == 1)
    {
        printf("%d is multiple of 13 ", num1);
    }

    else if (checkMultiple(num1) == 0)
    {
        printf("%d is 1 more than multiple of 13 ", num1);
    }
    return 0;
}

int checkMultiple(int num)
{

    if ((num % 13) == 0)
    {
        return 1;
    }

    else if ((num % 13) == 1)
    {
        return 0;
    }
}