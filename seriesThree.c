#include <stdio.h>
int main()
{
    int i = 0;
    float sum = 0, numChoice = 0, num = 1;
    printf("enter the number till you want to see the series result ");
    scanf("%f", &numChoice);
    for (i = 0; i < numChoice; i++)
    {
        sum = sum + num / (num + i);
    }
    printf("THE SUM OF THE SERIES IS %3.2f \n",sum);

    return 0;
}