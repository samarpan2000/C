#include <stdio.h>
int main()
{
    float n = 0.0f, y = 0.0f, x = 0.0f;
    char choice = '0';
    printf("WHICH VARIABLE DO YOU WANT TO FIND in y=nx equation ? ");
    scanf("%s", &choice);
    if (choice == 'x')
    {
        printf("ENTER THE VALUE OF y ");
        scanf("%f", &y);
        printf("ENTER THE VALUE OF n ");
        scanf("%f", &n);
        if (n < 0)
        {
            printf("please enter a positive integer\n");
        }
        else
        {
            x = y / n;
            printf("THE VALUE OF x of the equation y=nx is %3.2f ",x);
        }
    }
    else if (choice == 'y')
    {
        printf("ENTER THE VALUE OF x ");
        scanf("%f", &x);
        printf("ENTER THE VALUE OF n ");
        scanf("%f", &n);
        if (n < 0)
        {
            printf("please enter a positive integer\n");
        }
        else
        {
            y=n*x;
            printf("THE VALUE OF y of the equation y=nx is %3.2f ",y);
        }
    }
    else if (choice == 'n')
    {
        printf("ENTER THE VALUE OF y ");
        scanf("%f", &y);
        printf("ENTER THE VALUE OF x ");
        scanf("%f", &x);
        if (n < 0)
        {
            printf("please enter a positive integer\n");
        }
        else
        {
            n=y/x;
            printf("THE VALUE OF n of the equation y=nx is %3.2f ",n);
        }
    }
    return 0;
}