// Write a C program to shift given data by two bits to the left.

#include <stdio.h>
int main()
{
    int num = 0, shift = 0;
    printf("\n ENTER ANY INTEGER TO SHIFT IT BY 2BITS TO LEFT ");
    scanf("%d", &num);
    shift = num << 2;
    printf("\n AFTER SHIFTING TO 2 BITS TO LEFT IS %d ", shift);
    return 0;
}