#include <stdio.h>
int main()
{
    int i = 0, store = 0;
    printf(" || even number from 1-50 are || \n");
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        else
            printf(" %d ", i);
    }
    return 0;
}