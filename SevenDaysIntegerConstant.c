// Write a C program to create enumerated data type for 7 days and display their values in integer constants
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int constant[7] = {0}, i = 0;
    char *days[7] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
    for (i = 0; i < 7; i++)
    {
        constant[i] = i;
    }
    printf("\n the values of days of week in integer constant is \n");
    for (i = 0; i < 7; i++)
    {
        printf(" %s  ------  %d \n", days[i], constant[i]);
    }
    return 0;
}