#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, d2 = 0, maxValue = 0, minValue = 0, i = 0, diff = 0;
    printf("enter first  integer ");
    scanf("%d", &a);
    printf("enter second integer ");
    scanf("%d", &b);
    printf("enter third integer ");
    scanf("%d", &c);
    printf("enter fourth  integer ");
    scanf("%d", &d2);
    if (a >= b && a >= c && a >= d2)
    {
        maxValue = a;
    }
    else if (b >= a && b >= c && b >= d2)
    {
        maxValue = b;
    }
    else if (c >= a && c >= b && c >= d2)
    {
        maxValue = c;
    }
    else if (d2 >= a && d2 >= b && d2 >= c)
    {
        maxValue = d2;
    }
    if (a <= b && a <= c && a <= d2)
    {
        minValue = a;
    }

    else if (b <= a && b <= c && b <= d2)
    {
        minValue = b;
    }

    else if (c <= a && c <= b && c <= d2)
    {
        minValue = c;
    }

    else if (d2 <= a && d2 <= b && d2 <= c)
    {
        minValue = d2;
    }

    diff = maxValue - minValue;
    printf(" %d ", diff);
    return 0;
}