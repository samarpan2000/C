// 126.Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both

#include <stdio.h>

int checkMultiple(int num);

int main()
{

    int num1 = 0;

    printf("enter any non negative number ");
    scanf("%d", &num1);

    if (checkMultiple(num1) == 1)
    {
        printf("%d is multiple of 3 only", num1);
    }

    else if (checkMultiple(num1) == 0)
    {
        printf("%d is  multiple of 7 only ", num1);
    }
    else if(checkMultiple(num1)==2){
        printf("\0");
    }
    return 0;
}

int checkMultiple(int num)
{
    int flag = 0;
    if ((num % 3) == 0 && (num % 7) != 0)
    {
        flag = 1;
    }

    else if ((num % 7) == 0 && (num % 3) != 0)
    {
        flag = 0;
    }
    else
        flag = 2;
    return flag;
}