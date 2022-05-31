// Write a C function which checks whether a character is a digit or not and depending on the result count the number of digits given in a text taken as an input.

#include <stdio.h>
#include <string.h>
int isDigit(int num);

void main()
{
    char arr[1000];
    int ascii = 0;
    int i = 0, j = 0;
    int sum = 0;
    printf("enter any string containing numeric value ");
    fgets(arr, 1000, stdin);
    for (i = 0; i < strlen(arr) - 1; i++)
    {
        ascii = arr[i];
        if (isDigit(ascii) == 0)
        {

            sum = sum + (ascii - 48);
        }
    }

    printf("\n the sum of the digits is %d ", sum);
}

int isDigit(int ascii)
{
    if (ascii >= 48 && ascii <= 57)
    {
        return 0;
    }
    else
        return 1;
}