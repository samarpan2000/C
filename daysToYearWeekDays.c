#include <stdio.h>
int main()
{
    int input_days = 0, year = 0, week = 0, days = 0;
    printf("enter the total number of days ");
    scanf("%d", &input_days);
    year = input_days / 365;
    week = input_days / 7;
    days = year * 365;
    printf("the number of year in %d days are:- %d\n", input_days, year);
    printf("the number of week in %d days are:- %d\n", input_days, week);
    printf("the number of days in %d days are:- %d\n", input_days, days);
    return 0;
}