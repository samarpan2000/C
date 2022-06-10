// 111.	Write a C program to check whether a given positive number is a multiple of 3 or a multiple of 7

#include <stdio.h>

void main()
{
    int num = 0;
    printf("enter any number to check whether it's multiple of 3 or 7 ");
    scanf("%d", &num);
    if (num % 3 == 0)
    {
        if (num % 7 == 0)
        {
            printf("the number %d is a multiple of both 3 and 7 ", num);
        }
        else
            printf("the number %d is a multiple of 3 ", num);
    }
    else if (num % 7 == 0)
    {
        if (num % 3 == 0)
        {
            printf("the number %d is a multiple of both 3 and 7 ", num);
        }
        else

            printf("the number %d is a multiple of 7 ", num);
    }
}
