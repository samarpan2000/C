#include <stdio.h>
int main()
{
    int a = 0, b = 0, product = 0;
    printf("enter first number ");
    scanf("%d", &a);
    printf("enter second number ");
    scanf("%d", &b);
    product = a * b;
    printf("the product of two number is %d ", product);
    return 0;
}