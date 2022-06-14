// 137.	Write a C program to compute the sum of the three given integers. However, if any of the values is in the range 10...20 inclusive then that value counts as 0, except 13 and 17
#include <stdio.h>

int sum(int a, int b, int c);

void main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("enter the value of a ");
    scanf("%d", &a);
    printf("enter the value of a ");
    scanf("%d", &b);
    printf("enter the value of a ");
    scanf("%d", &c);

    printf("the sum is %d ", sum(a, b, c));
}

int sum(int a, int b, int c)
{
    int sum = 0;

    sum = a + b + c;

    if (sum >= 10 && sum <= 20)
    {
        if (sum == 13)
        {
            return sum;
        }
        else if (sum == 17)
        {
            return sum;
        }
        else
        {
            sum = 0;
            return sum;
        }
    }
}
