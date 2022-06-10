// 114.	Write a C program to check whether three given integer values are in the range 20...50 inclusive. Return true if 1 or more of them are in the said range otherwise return false
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("enter any three number ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= 20 && num1 <= 50 && num2 >= 20 && num2 <= 50 && num3 >= 20 && num3 <= 50)
    {
        printf("true");
    }
    else
        printf("flase");
    return 0;
}