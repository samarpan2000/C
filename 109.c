// 109.	Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.

#include <stdio.h>
int checkNum(int a, int b);

void main()
{
    int a = 0, b = 0;
    int sum = 0;

    printf("enter value of a ");
    scanf("%d", &a);

    printf("enter value of a ");
    scanf("%d", &b);
    if (checkNum(a, b) == 0)
    {
        printf("TRUE");
    }
    else
        printf("FALSE");
}
int checkNum(int a, int b)
{
    if ((a + b) == 30 || a == 30 || b == 30)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}