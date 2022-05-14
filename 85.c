// 85.	 Write a C program that reads five subject marks (0-100) of a student and calculate the average of these marks

#include <stdio.h>

int avg(int n1, int n2, int n3, int n4, int n5);

void main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    int  average = 0;
    printf("enter the marks in 5 subject ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average=avg(a,b,c,d,e);
    printf("the average of 5 numbers is :- %d ",average);
}

int avg(int n1, int n2, int n3, int n4, int n5)
{
    int total = 0;
    int av = 0;
    total = (n1 + n2 + n3 + n4 + n5);
    av = total / 5;
    return av;
}