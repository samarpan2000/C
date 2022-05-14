// Write a C program that accepts a pair of numbers from the user and print the sequence from the lowest to highest number. Also, print the average value of the sequence
#include <stdio.h>
int sequence(int num1, int num2);
int avg(int num1, int num2);
void main()
{
    int n1 = 0, n2 = 0;

    printf("enter the pair of number ");
    scanf("%d %d", &n1, &n2);
    printf("\nthe sequence of number from low to high is \n");
    sequence(n1, n2);

    printf("\nthe average of num is \n%d", avg(n1, n2));
}
int sequence(int num1, int num2)
{
    int i = 0;
    int sum = 0;
    if (num2 > num1)
    {
        for (i = num1; i <= num2; i++)
        {
            if (i <= num2)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        for (i = num2; i < num1; i++)
        {
            if (i <= num1)
            {
                printf("%d ", i);
            }
        }
    }
    return i;
}

int avg(int nu1, int nu2)
{
    int i = 0, avgg = 0;
    int sum = 0, count = 0;
    if (nu2 > nu1)
    {
        for (i = nu1; i <= nu2; i++)
        {

            sum += i;
            count++;
        }

        avgg = sum / count;
    }
    else
    {
        for (i = nu2; i <= nu1; i++)
        {

            sum += i;
            count++;
        }

        avgg = sum / count;
    }
    return avgg;
}