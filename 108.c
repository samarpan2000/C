//108.	Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference

#include <stdio.h>
#include<math.h>
int checkNum(int a);

void main()
{
    int a = 0, b = 0;
    int absDiff= 0;

    printf("enter value of a ");
    scanf("%d", &a);

    if (checkNum(a) == 1)
    {
        absDiff = 3 * (abs((a - 51)));
        printf("%d ", absDiff);
    }
    else
    {
        absDiff = a - 51;
        printf("%d ", absDiff);
    }
}
int checkNum(int a)
{
    if (a > 51)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}