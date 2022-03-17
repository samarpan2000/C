#include <stdio.h>
int main()
{
    float num = 1.0f, i = 0.0f;
    float s = 0.0f;

    for (i = 0.0f; i < 50.0f; i++)
    {
        s = s + num / (num + i);
    }
printf("THE VALUE OF S IS %f ",s);
    return 0;
}