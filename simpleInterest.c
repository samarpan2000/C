#include <stdio.h>
int main()
{
    float p = 0.0f, r = 0.0f, sI = 0.0f;
    int t = 0;
    printf("enter the principle amount ");
    scanf("%f", &p);
    printf("enter the rate ");
    scanf("%f", &r);
    printf("enter the time ");
    scanf("%d", &t);
    sI = (p * r * t) / 100;
    printf("THE SIMPLE INTEREST IS %3.2f ", sI);
    return 0;
}