#include <stdio.h>
int main()
{
    float num = 1.0f, i = 1.0f;
    float s = 0.0f;

    for (i = 1.0f; i <= 8.0f; i *= 2)
    {
        if (i != 6)
        {
            s = s + (num / i);

            num += 2;
        }
        else
            continue;
    }

    printf("THE VALUE OF S IS %f ", s);
    return 0;
}