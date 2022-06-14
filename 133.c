// 133.	Write a C program to find the larger from two given integers. However,
//  if the two integers have the same remainder when divided by 5,
// then the return the smaller integer. If the two integers are the same, return 0

#include <stdio.h>

int CheckLarge(int a, int b);
int CheckRem(int a, int b);

int main()
{
    int a = 0;
    int b = 0;

    printf("enter value of a ");
    scanf("%d", &a);
    printf("enter value of b ");
    scanf("%d", &b);

    printf("%d\n", CheckLarge(a, b));
    printf("%d",CheckRem(a,b));
    return 0;
}

int CheckLarge(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}

int CheckRem(int a, int b)
{
    int rem1 = 0, rem2 = 0;
    rem1 = a % 5;
    rem2 = b % 5;
    if (rem1 == rem2 && a > b)
    {
        return b;
    }
    else if (a == b)
    {
        return 0;
    }
}