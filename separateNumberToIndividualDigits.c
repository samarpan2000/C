#include <stdio.h>
int main()
{
    int num = 0, arr[7] = {0}, i = 0, var = 0;
    printf("enter any 7-digits number ");
    scanf("%d", &num);
    for (i = 0; i < 7; i++)
    {
        var = num % 10;
        arr[i] = var;
        num = num / 10;
    }
    printf("\n the digits separated from one another by two spaces each is :- ");
    
    for (i = 6; i >= 0; i--)
    {

        printf("%d", arr[i]);
        printf("  ");
    }
    printf(" \n ");

    return 0;
}