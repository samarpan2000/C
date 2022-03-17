#include<stdio.h>
int main(){
int num1=0,num2=0;
printf("enter num1 ");
scanf("%d",&num1);
printf("enter num2 ");
scanf("%d",&num2);
if((num1>num2 && num1%num2==0) || (num1<num2 && num1%num2==0)){
    printf("DIVISION POSSIBLE");
}
else
printf("DIVISION NOT POSSIBLE ");
return 0;
}