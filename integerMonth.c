#include<stdio.h>
int main(){
int input=0;
printf("enter any integer value between 1-12 ");
scanf("%d",&input);
switch(input){
    case 1:
printf(" MONTH IS JANUARY ");
    break;
    case 2:
printf(" MONTH IS FEBRUARY ");
    break;
    case 3:
printf(" MONTH IS MARCH ");
    break;
    case 4:
printf(" MONTH IS APRIL ");
    break;
    case 5:
printf(" MONTH IS MAY ");
    break;
    case 6:
printf(" MONTH IS JUNE ");
    break;
    case 7:
printf(" MONTH IS JULY ");
    break;
    case 8:
printf(" MONTH IS AUGUST ");
    break;
    case 9:
printf(" MONTH IS SEPTEMBER ");
    break;
    case 10:
printf(" MONTH IS OCTOBER ");
    break;
    case 11:
printf(" MONTH IS NOVEMBER ");
    break;
    case 12:
printf(" MONTH IS DECEMBER ");
    break;
    
    default:
    printf(" ENTER BETWEEN 1-12 RANGE ");
    

}
return 0;
}