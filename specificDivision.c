#include <stdio.h>
int main()
{
    int i = 0, num = 0, store = 0;
    printf("enter any number ");
    scanf("%d", &num);
    for (i = 1; i < 100; i++)
    {
        if (i % num == 3)
        {
            printf("THE NUMBER %d IS DIVISIBLE BY %d LEAVING THE REMAINDER 3 \n", num, i);
        }

        else
        {
            continue;
            
        }
    }
    return 0;
}