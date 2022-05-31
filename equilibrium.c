
#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    int ub = 0, lb = 0, mid = 0;
    int leftsubArr = 0, rightsubArr = 0;
    int arr[6] = {1, 2, 3, 4, 5};
    mid = (arr[0] - arr[4]) / 2;
    for (i = 1; i >= 0; i--)
    {
        if (arr[i] % 2 == 0)
        {
            leftsubArr = 1;
        }
    }
    for (i = 3; i <= 4; i++)
    {
        if (arr[i] % 2 != 0)
        {
            rightsubArr = 1;
        }
    }

    if (leftsubArr == rightsubArr)
    {
        printf(" true ");
    }
}
