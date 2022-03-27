#include <stdio.h>
int main()
{
    float p = 0.0f, r = 0.0f, si = 0.0f;
    int t = 0;
    printf("ENTER THE PRINCIPAL AMOUNT ");
    scanf("%f", &p);
    printf("ENTER THE RATE ");
    scanf("%f", &r);
    printf("ENTER THE TIME DURATION  ");
    scanf("%d", &t);
    si = (p * r * t) / 100.00f;
    printf("THE SIMPLE INTEREST IS %3.2f", si);


return 0;
}