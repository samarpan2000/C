#include <stdio.h>
int main()
{
    int input1 = 0, input2 = 0;
    printf("ENTER THE FIRST INTEGER ");
    scanf("%d", &input1);
    printf("ENTER THE SECOND INTEGER ");
    scanf("%d", &input2);
    if(input1<input2){
        input1=input1+input2;
        input2=input1-input2;
        input1=input1-input2;
        if (input1 % input2 == 0)
        printf(" INTEGERS ARE MULTIPLIED ");
            else
            printf(" INTEGERS ARE NOT MULTIPLIED ");
    }
    else if(input1>input2)
    {
        if (input1 % input2 == 0)
        printf(" INTEGERS ARE MULTIPLIED ");
            else
            printf(" INTEGERS ARE NOT MULTIPLIED ");

    }
    return 0;
}