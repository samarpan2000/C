// 112.	Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100

#include <stdio.h>

int main()
{
    int temp = 0;
    int num1 = 0, num2 = 0;
    printf("enter the two temperatures ");
    scanf("%d %d", &num1, &num2);
    if (num1 > 0 && num2 > 0)
    {
        printf("BOTH POSITIVE");
    }

    else if (num1 < 0 && num2 < 0)
    {
        printf("BOTH NEGATIVE");
    }

    else if (num1 > 0 && num2 < 0)
    {
        printf("%d is positive \n %d is negative ", num1, num2);
    }

    else if (num1 < 0 && num2 > 0)
    {
        printf("%d is positive \n %d is negative ", num2, num1);
    }

    else if (num1 == 0 && num2 < 0)
    {
        printf("%d is zero \n %d is negative ", num1, num2);
    }
    else if (num1 == 0 && num2 > 0)
    {
        printf("%d is zero \n %d is positive ", num1, num2);
    }
    else if (num1 > 0 && num2 == 0)
    {
        printf("%d is positive \n %d is zero ", num1, num2);
    }
    else if (num1 < 0 && num2 == 0)
    {
        printf("%d is negative \n %d is zero ", num1, num2);
    }
    else if (num1 == 0 && num2 < 0)
    {
        printf("%d is zero \n %d is negative ", num1, num2);
    }

    else if (num1 == 0 && num2 == 0)
    {
        printf("BOTH are ZERO");
    }
    return 0;
}
