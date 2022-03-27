
#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("enter the first integer value ");
    scanf("%d", &a);
    printf("enter the second integer value ");
    scanf("%d", &b);
    if (a != b)
    {
        if (a > b)
        {
            printf("DESCENDING ORDER ");
        }
        else if (b > a)
        {
            printf("ASCENDING ORDER ");
        }
    }
    else
    {
        printf("BOTH THE VALUES ENTERED ARE EQUAL... PLEASE INPUT DIFFERENT VALUES FOR CHECKING ");
    }
    return 0;
}
