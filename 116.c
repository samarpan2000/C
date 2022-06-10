// 116.	Write a C program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal
#include <stdio.h>
int checkNear(int num1, int num2);
int main()
{
    int num1 = 0, num2 = 0;
    printf("enter first number ");
    scanf("%d", &num1);
    printf("enter second number ");
    scanf("%d", &num2);
    if (checkNear(num1, num2) == 1)
    {
        printf("%d is nearer to 100 than %d ", num1, num2);
    }
    else if (checkNear(num1, num2) == 0)
    {
        printf("%d is nearer to 100 than %d ", num2, num1);
    }
    return 0;
}
int checkNear(int num1, int num2)
{
    int diff1 = 0, diff2 = 0;
    diff1 = 100 - num1;
    diff2 = 100 - num2;
    if (diff1 < diff2)
    {
        return 1;
    }
    else if (diff2 < diff1)
    {
        return 0;
    }
}