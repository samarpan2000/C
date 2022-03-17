#include <stdio.h>
int main()
{
    int num = 0, choice = 0, i = 0,sum=0;
    printf("enter how many pair of integer you want to put ");
    scanf("%d", &choice);
    
    for (i = 0; i < choice; i++)
    {
        printf("enter the integers ");
        scanf("%d", &num);
        if (num % 2 != 0)
        {
            
            sum = sum + num;
        }
    }
    printf("sum of consecuitive odd number is %d ",sum);

    return 0;
}