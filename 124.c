// 124.	Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5
#include <stdio.h>

int checkSum(int num1, int num2);
int checkDiff(int num1, int num2);

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("enter first number ");
    scanf("%d", &num1);
    printf("enter second number ");
    scanf("%d", &num2);

    if (checkSum(num1, num2) == 1 || checkDiff(num1, num2) == 1)
    {
        printf("true");
    }
    else
        printf("false");
    return 0;
}

int checkSum(int num1, int num2)
{
    int sum = 0;
    sum = num1 + num2;
    if (sum == 5 || num1 == 5 || num2 == 5)
    {
        return 1;
    }
    else
        return 0;
}

int checkDiff(int num1, int num2)
{
    int diff = 0;
    diff = num1 - num2;
    if (diff == 5 || num1 == 5 || num2 == 5)
    {
        return 1;
    }
    else
        return 0;
}
