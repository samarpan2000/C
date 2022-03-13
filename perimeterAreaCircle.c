#include <stdio.h>
int main()
{
    float area = 0.0f, r = 0.0f;
    printf("enter the value of radius ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("the area of the circle is %3.2f ", area);
    return 0;
}