// 138.	Write a C program to check two given integers and return the value whichever
// value is nearest to 13 without going over.
//  Return 0 if both numbers go over

#include <stdio.h>

int checkNum(int a, int b);

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    printf("enter 1st number ");
    scanf("%d", &num1);
    printf("enter 2nd number ");
    scanf("%d", &num2);

    printf("%d", checkNum(num1, num2));
    return 0;
}

int checkNum(int a, int b)
{

    if (a > 13 && b > 13)
        return 0;
    if (a <= 13 && b > 13)
        return a;
    if (a <= 13 && b > 13)
        return b;
    if ((a >= 10 && a <= 13) && (b >= 10 && b <= 13))
    {
        if (a > b)
        {
            return a;
        }
        else
            return b;
    }
}
