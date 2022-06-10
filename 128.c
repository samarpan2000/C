//128.	Write a C program to compute the sum of the two given integers. If one of the given integer values is in the range 10...20 inclusive return 18.

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
    if (num1 >= 10 && num1 <= 20||num2 >= 10 && num2 <= 20)
    {
        return 18;
    }
    else
        return sum;
}
