// 130.	Write a C program to check whether y is greater than x, and z is greater than y from three given integers x, y, z
#include <stdio.h>

int checkInteger(int a, int b, int c);

int main()
{

    int x = 0;
    int y = 0;
    int z = 0;

    printf("enter x ");
    scanf("%d", &x);
    printf("enter y ");
    scanf("%d", &y);
    printf("enter z ");
    scanf("%d", &z);

if(checkInteger(x,y,z)==0){
    printf("y>x");
}
else if(checkInteger(x,y,z)==1){
    printf("z>y");
}
    return 0;
}

int checkInteger(int a, int b, int c)
{

int flag=0;
    if (b > a)
    {

        if (c > b)
        {
            flag=1;
            
        }
        else
            flag=0;
    }
    return flag;
}