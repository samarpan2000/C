// 131.Write a C program to check whether two or more non-negative given integers have the same rightmost digit
#include <stdio.h>

int checkRightDigit(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    printf("enter value of a");
    scanf("%d", &a);
    printf("enter value of b");
    scanf("%d", &b);
    if (checkRightDigit(a, b) == 1)
    {
        printf("same right most digit present ");
    }
    else
        printf("same rightmost digit not present");
    return 0;
}

int checkRightDigit(int a, int b)
{
    int var1 = 0;
    int var2 = 0;
    int copy1 = 0;
    int copy2 = 0;
    copy1 = a;
    copy2 = b;
    var1 = copy1 % 10;
    var2 = copy2 % 10;
    if (var1 == var2)
    {
        return 1;
    }
    else
        return 0;
}