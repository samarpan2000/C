// 139.	Write a C program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same

#include <stdio.h>

int checkNum(int a, int b, int c);

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    printf("enter 1st number ");
    scanf("%d", &num1);
    printf("enter 2nd number ");
    scanf("%d", &num2);
    printf("enter 2nd number ");
    scanf("%d", &num3);

    if (checkNum(num1, num2, num3) == 1)
    {
        printf("true ");
    }
    else
    {
        printf("false ");
    }
    return 0;
}

int checkNum(int a, int b, int c)
{
    int large = 0;
    int mid = 0;
    int small = 0;

    int diffMidSmall=0;
    int diffMidLarge=0;

    if (a > b && a > c)
    {
        if (b > c)
        {
            large = a;
            mid = b;
            small = c;
            diffMidLarge=large-mid;
            diffMidSmall=mid-small;
        }
        else{
            large = a;
            mid = c;
            small = b;
            
            diffMidLarge=large-mid;
            diffMidSmall=mid-small;
        }

    }
    else if (b > a && b > c)
    {
        if (a > c)
        {
            large = b;
            mid = a;
            small = c;
            
            diffMidLarge=large-mid;
            diffMidSmall=mid-small;
        }
         else{
            large = b;
            mid = c;
            small = a;
            
            diffMidLarge=large-mid;
            diffMidSmall=mid-small;
        }
    }
    else if (c > a && c > b)
    {
        if (a > b)
        {
            large = c;
            mid = a;
            small = b;
            
            diffMidLarge=large-mid;
            diffMidSmall=mid-small;
        }
        else{
            large = c;
            mid = b;
            small = a;
            
            diffMidLarge=large-mid;
            diffMidSmall=mid-small;
        }

    }

    if(diffMidLarge==diffMidSmall){
        return 1;
    }
    else
    return 0;
}
