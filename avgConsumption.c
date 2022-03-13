#include <stdio.h>
int main()
{
    int totalDistance = 0;
    float fuel = 0.0f, avg = 0.0f;
    printf("enter the total distance in KM ");
    scanf("%d", &totalDistance);
    printf("enter the total fuel spent in litres ");
    scanf("%f", &fuel);
    avg = totalDistance / fuel;
    printf("the average fuel consumption is %3.2f KM/litres ", avg);
    return 0;
}