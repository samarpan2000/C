#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0,sq = 0,num = 0;
    
    printf("enter any number till which you want to find the squared value of its even integer  ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {

        if (i % 2 == 0)
        {
            sq = pow(i, 2);
        printf("the square of the number is %d \n", sq);
        }
    }
    return 0;
}