// 99.	 Write a C program to check whether three given lengths (integers) of three sides of a triangle form a right triangle or not. Print "Yes" if the given sides form a right triangle otherwise print "No".

#include <stdio.h>
int triangleCheck(int n, int b, int h);
void main()
{
    int norm = 0, base = 0, hypo = 0;
    printf("enter normal base hypotenuse ");
    scanf("%d %d %d", &norm, &base, &hypo);
    triangleCheck(norm, base, hypo);
}
int triangleCheck(int n, int b, int h)
{

    if (h > b && h > n && n > b)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
}