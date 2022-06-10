// 117.	Write a C program to check whether two given integers are in the range 40...50 inclusive, or they are both in the range 50...60 inclusive
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;

    
    printf("enter any two number ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 >= 40 && num1 <= 50 && num2 >= 40 && num2 <= 50)
    {
        printf("%d and %d are in range 40-50 ", num1, num2);
    }
    
    else if (num1 >= 50 && num1 <= 60 && num2 >= 50 && num2 <= 60)
    {
        printf("%d and %d are in range 50-60 ", num1, num2);
    }
    return 0;
}