#include<stdio.h>
int main(){
int month=0,employee_id=0,workHour=0,amountPerHour=0;
float salary=0.0f,salaryLeap=0.0f;
printf("enter the employees ID ");
scanf("%d",&employee_id);
printf("enter the employees worked hour ");
scanf("%d",&workHour);
printf("enter the employees salary per hour ");
scanf("%d",&amountPerHour);
printf("enter the number of month [for jan - 1, feb - 2 and so on] ");
scanf("%d",&month);
if(month==4||month==6||month==9||month==11){
salary=amountPerHour*workHour*30;
printf("the amount of salary he will receive at the end of the month is rupees %3.2f",salary);
}

else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
salary=amountPerHour*workHour*31;
printf("the amount of salary he will receive at the end of the month is rupees %3.2f",salary);
}

else {
salaryLeap=amountPerHour*workHour*29;
salary=amountPerHour*workHour*28;
printf("the amount of salary he will receive at the end of the month is rupees %3.2f\n",salary);
printf("the amount of salary he will receive at the end of the month if its leap year is rupees %3.2f",salaryLeap);
}
return 0;
}