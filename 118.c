// 118.	Write a C program to find the larger value from two positive integer values that is in the range 20...30 inclusive, or return 0 if neither is in that range
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;

    int max = 0;

    printf("enter any two number ");
    scanf("%d %d", &num1, &num2);

    if (num1 >= 20 && num1 <= 30 && num2 >= 20 && num2 <= 30)
    {
        if (num1 > num2)
        {
            max = num1;
        }
        else
        {
            max = num2;
        }
        printf("%d and %d are in range 20-30 \n maximum among these two is %d ", num1, num2, max);
    }

    else
    {
        printf("%d and %d are not in range 20-30 ", num1, num2);
    }
    return 0;
}