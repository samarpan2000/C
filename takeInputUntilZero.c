#include <stdio.h>
int main()
{
    int numChoice = 0, num = 0, count = 0, i = 0, avg = 0, sum = 0, arr[200] = {0}, max = -65536, min = 65536;
    do
    {

        printf("ENTER THE INTEGER \n");
        scanf("%d", &arr[i]);
        i++;
        count++;
        printf("DO you wish to continue? type (0 or negative integer to terminate) OR (press 1 to continue) ");
        scanf("%d", &numChoice);

    } while (numChoice > 0);
        printf(" the positive elements are :- \n");
        printf(" the minimum elements are  :- \n");
        printf(" the max elements are      :- \n");

    for (i = 0; i < count; i++)
    {


        if (arr[i] > 0)
        {
            printf("\n %d \n", arr[i]);
        }
        if (arr[i] > max)
        {
            max = arr[i];
            printf("  %d ", max);
        }
        if (arr[i] < min)
        {
            min = arr[i];
            printf(" %d ", min);
        }
    }
    return 0;
}