#include<stdio.h>
int main(){
int num1=0,num2=0,i=0,sum=0;
printf("enter first number ");
scanf("%d",&num1);
printf("enter integer upto which you want to see ");
scanf("%d",&num2);
for(i=num1;i<=num2;i++){
    if(i%17!=0){
        sum=sum+i;
    }
    
}
printf("THE SUM OF ALL THE NUMBER BETWEEN %d and %d is %d ",num1,num2,sum);

return 0;
}