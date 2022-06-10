// 119.	Write a C program to check if two given non-negative integers have the same last digit
#include <stdio.h>
int checkDigit1(int num);
int checkDigit2(int num);

void main()
{
    int num1 = 0;
    int num2 = 0;
    printf("enter first number ");
    scanf("%d", &num1);
    printf("enter second number ");
    scanf("%d", &num2);
    if (num1 > 0 && num2 > 0)
    {
        if (checkDigit1(num1) == checkDigit2(num2))
        {
            printf("the last digits are equal");
        }
        else
            printf("last digits are not equal");
    }
    else
        printf("enter positive integers ");
}

int checkDigit1(int num)
{
    int copy = 0;
    int store = 0;

    copy = num;
    store = copy % 10;

    return store;
}

int checkDigit2(int num)
{
    int copy = 0;
    int store = 0;
    copy = num;
    store = copy % 10;

    return store;
}