
#include <stdio.h>
void main()
{
    int i = 0, j = 4;
    int leftsubArr = 0, rightsubArr = 0;

    int arr[6] = {12, 54, 32, 78, 39};
    // Index      0,  1,  2,  3,  4

    // mid = (arr[0] - arr[4]) / 2; //(upperbound - lowerbound)/2

    // swapping the elements as mentioned in the question
    for (i = 0; i < 2; i++)
    {
        arr[i] = arr[i] + arr[j - 1 - i];
        arr[j - 1 - i] = arr[i] - arr[j - 1 - i];
        arr[i] = arr[i] - arr[j - 1 - i];
        j += 2;
    }
    // printing the arrays
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }
}
