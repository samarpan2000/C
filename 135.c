// 135.	Write a C program to compute the sum of three given integers.
//  If the two values are same return the third value

#include <stdio.h>

int checkSame(int a, int b, int c);
int sum(int a, int b, int c);

int main()
{
    int num1=0,num2=0,num3=0;
    
    printf("enter 1st number ");
    scanf("%d",&num1);
    printf("enter 2nd number ");
    scanf("%d",&num2);
    printf("enter 3rd number ");
    scanf("%d",&num3);

    printf("sum is %d\n",sum(num1,num2,num3));
    printf("%d",checkSame(num1,num2,num3));
return 0;
}

int checkSame(int a, int b, int c)
{

    if (a == b)
    {
        return c;
    }
    else if (b == c)
    {
        return a;
    }
    else if (c == a)
    {
        return b;
    }
}

int sum(int a, int b, int c)
{
    int sum = 0;
    sum = a + b + c;

    return sum;
}