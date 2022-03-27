#include<stdio.h>
int main(){
int num=0,sum=0,i=0;
printf("enter any integer less than 500 ");
scanf("%d",&num);
for(i=0;i<3;i++){
    sum=sum+num%10;
    num=num/10;
}
printf("the SUM OF DIGITS IS %d ",sum);
return 0;
}