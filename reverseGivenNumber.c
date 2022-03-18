#include <stdio.h>
int main()
{
    // input 12345
    // output 54321
    int i = 0, num = 12345, s = 0;
    for (i = 0; i < 5; i++)
    {
        s = num % 10;
        num = num / 10;
        printf(" %d ", s);
    }
    return 0;
}