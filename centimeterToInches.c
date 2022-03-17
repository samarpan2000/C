#include <stdio.h>
int main()
{
    float num = 0;
    float inches = 0;
    printf("enter the value of any distance in centimeter ");
    scanf("%f", &num);
    inches = num * 0.393701;
    printf(" the corresponding values in inches is %3.2f inches", inches);

    return 0;
}