// 101.	Write a C program to test whether two lines are parallel or not.
// The four points are P (x1, y1), Q (x2, y2), R (x3, y3) and S (x4, y4), check PQ and RS are parallel are not
#include<stdio.h>
int isParallel(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

void main()
{
    int X1 = 0, Y1 = 0, X2 = 0, Y2 = 0, X3 = 0, Y3 = 0, X4 = 0, Y4 = 0;
    printf(" FOR CO-ORDINATES P AND Q \n");
    printf("enter the value of X1 and Y1 ");
    scanf("%d %d", &X1, &Y1);
    printf("enter the value of X2 and Y2 ");
    scanf("%d %d", &X2, &Y2);
    printf(" FOR CO-ORDINATES R AND S \n");
    printf("enter the value of X3 and Y3 ");
    scanf("%d %d", &X3, &Y3);
    printf("enter the value of X4 and Y4 ");
    scanf("%d %d", &X4, &Y4);

    if(isParallel(X1,Y1,X2,Y2,X3,Y3,X4,Y4)==1){
        printf("PQ AND RS ARE || \n");
    }

    else
    printf("PQ AND RS ARE not || \n");


}

int isParallel(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int slope1 = 0;
    int slope2 = 0;
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y4 - y3) / (x4 - x3);
    if (slope1 == slope2)
    {
        return 1;
    }
    else
        return 0;
}