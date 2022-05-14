//83.	 Write a C program that accepts a pair of numbers from the user and prints "Ascending order" if the two numbers are in ascending order, otherwise prints, "Descending order".
#include<stdio.h>
int aD(int num1,int num2);

void main()
{
    int n1,n2;
    printf("enter any two number pairs ");
    scanf("%d %d",&n1,&n2);
    aD(n1,n2);

}

int aD(int num1,int num2){
    if(num1<num2){
        printf("ASCENDING ORDER\n");
    } 
    else
    {
        printf("DESCENDING ORDER\n");
    }
    return 0;
}