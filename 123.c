// 123.	Write a C program to compute the sum of the two given integers. If the sum is in the range 10...20 inclusive return 30.

#include <stdio.h>

int checkSum(int num1, int num2);

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("enter first number ");
    scanf("%d", &num1);
    printf("enter second number ");
    scanf("%d", &num2);
    printf(" %d ", checkSum(num1, num2));
}

int checkSum(int num1, int num2)
{
    int sum = 0;
    sum = num1 + num2;
    if (sum >= 10 && sum <= 20)
    {
        return 30;
    }
    else
        return sum;
}
