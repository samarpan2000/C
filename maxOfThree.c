#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    printf("enter the value of first number ");
    scanf("%d", &a);
    printf("enter the value of second number ");
    scanf("%d", &b);
    printf("enter the value of third number ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greater than %d , %d ", a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater than %d , %d ", b, a, c);
    }
    else if (c > b && c > a)
    {
        printf("%d is greater than %d , %d ", c, a, b);
    }
    return 0;
}