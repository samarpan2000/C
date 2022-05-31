// Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum

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
    if (checkNum(a, b) == 1)
    {
        sum = 3 * (a + b);
        printf("%d ", sum);
    }
    else
    {
        sum = a + b;
        printf("%d ", sum);
    }
}
int checkNum(int a, int b)
{
    if (a == b)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}