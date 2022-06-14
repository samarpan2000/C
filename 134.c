// 134.	Write a C program to check two given integers, each in the range 10...99.
// Return true if a digit appears in both numbers, such as the 3 in 13 and 33

#include <stdio.h>

int CheckRangeDigit(int a, int b);

int main()
{
    int a = 0;
    int b = 0;

    printf("enter value of a ");
    scanf("%d", &a);
    printf("enter value of b ");
    scanf("%d", &b);

    if (CheckRangeDigit(a, b) == 1)
    {
        printf("TRUE");
    }
    else if (CheckRangeDigit(a, b) == 0)
    {
        printf("FALSE");
    }

    return 0;
}

int CheckRangeDigit(int a, int b)
{
    int var1 = 0;
    int var2 = 0;
    int copy1 = 0;
    int copy2 = 0;
    int flag = 0;
    copy1 = a;
    copy2 = b;

    if ((a >= 10 && a <= 99) && (b >= 10 && b <= 99))
    {
        while ((copy1 || copy2) != 0)
        {
            var1 = copy1 % 10;
            var2 = copy2 % 10;
            if (var1 == var2)
            {
                flag = 1;
                break;
            }
            else
            {
                copy1 /= 10;
                copy2 /= 10;
                flag = 0;
                continue;
            }
        }
    }
    return flag;
}
