#include <stdio.h>
int main()
{
    int i = 0, marks[5000], count = 0, choice = 0;
    float sum = 0.0f;

    do
    {
        printf("enter marks ");
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
        count++;
        i++;
        printf("will you want to continue ?? press 1 to continue or 0 to stop ");
        scanf("%d", &choice);
    } while (choice > 0);
    printf("AVERAGE OF THE MARKS IS %3.2f ", (sum / count));

    return 0;
}