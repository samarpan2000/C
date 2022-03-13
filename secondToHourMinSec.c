#include<stdio.h>
int main(){
int input=0,hour=0,min=0,sec=0;
printf("enter the total amount  of second ");
scanf("%d",&input);
hour=input/3600;
min=input/60;
sec=input;
printf("there is %d hours in %d seconds \n",hour,input);
printf("there is %d minutes in %d seconds \n",min,input);
printf("there is %d seconds in %d seconds ",sec,input);

return 0;
}