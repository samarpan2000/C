#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    printf(" the numbers before swapping is %d %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" the numbers after swapping is %d %d \n", a, b);

    return 0;
}