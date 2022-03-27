#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("enter first integer  to check whether its multiple ");
    scanf("%d", &a);
    printf("enter second integer ");
    scanf("%d", &b);
    if (a % b == 0)
    {
        printf("%d is a multiple of %d ", a, b);
    }
    else
        printf("%d is not multiple of %d ", a, b);

    return 0;
}