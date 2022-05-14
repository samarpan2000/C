// Write a C program to print a sequence from 1 to a given (integer) number, insert a comma between these numbers, there will be no comma after the last character

#include <stdio.h>

void main()
{
    int i = 0;
    int num;
    printf("enter the range ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d", i);
        if (i != num)
        {
            printf(",");
        }
    }
}