// Write a C program to calculate the sum of two given integers and count the number of digits of the sum value.
#include <stdio.h>
int sum(int num1, int num2);
int numOfDigits(int num1, int num2);
void main()
{
    int i = 0;
    int n1 = 0, n2 = 0;
    printf("enter any two numbers ");
    scanf("%d %d", &n1, &n2);
    printf("\n the sum of %d+%d is %d \n", n1, n2, sum(n1, n2));
    printf("\n the number of digits is %d \n", numOfDigits(n1,n2));
}
int numOfDigits(int num1, int num2)
{
    int count = 0, var = 0;
    int s = num1 + num2;
    while (s != 0)
    {
        var = s % 10;
        count++;
        s = s / 10;
    }

    return count;
}

int sum(int num1, int num2)
{
    int sum = 0;
    sum = num1 + num2;
    return sum;
}