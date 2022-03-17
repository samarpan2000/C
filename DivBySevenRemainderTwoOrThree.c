#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, i = 0;
    printf("enter first number ");
    scanf("%d", &num1);
    printf("enter integer upto which you want to see ");
    scanf("%d", &num2);
    for (i = num1; i <= num2; i++)
    {
        if (i % 7 == 0)
        {

            printf(" ALL THE NUMBER BETWEEN %d and %d THAT IS DIVISIBLE BY 7 is %d \n", num1, num2, i);
        }
        else if (i % 7 == 2 || i % 7 == 3)
        {
            printf(" ALL THE NUMBER BETWEEN %d and %d THAT IS DIVISIBLE BY 7 LEAVING REMAINDER 2 OR 3 is %d \n", num1, num2, i);
        }
    }

    return 0;
}