// 110.	Write a C program to check a given integer and return true if it is within 10 and 100 or 200
#include <stdio.h>
#include <math.h>

int checkNum(int a);

void main()
{
    int a = 0;
    printf("enter any integer ");
    scanf("%d", &a);
    if (checkNum(a) == 1)
    {
        printf("flase");
    }
    else
        printf("true");
}

int checkNum(int a)
{
    if (a <= 10 ||a <= 100||a <= 200)
    {
        return 0;
    }
    else
        return 1;
}