// 129.	Write a C program to check whether it is possible to add two integers to get the third integer from three given integers
#include <stdio.h>

int checkInteger(int a, int b, int c);

int main()
{

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("enter num1 ");
    scanf("%d", &num1);
    printf("enter num2 ");
    scanf("%d", &num2);
    printf("enter num3 ");
    scanf("%d", &num3);

    if (checkInteger(num1, num2, num3) == 1)
    {
        printf("possible");
    }
    else if (checkInteger(num1, num2, num3) == 0)
    {
        printf("not possible");
    }

    return 0;
}

int checkInteger(int a, int b, int c)
{

    if ((a + b) == c || (a + c) == b || (b + c) == a)
    {
        return 1;
    }
    else
        return 0;
}