#include<stdio.h>
int main(){
int num=0,count=0,i=0,sum=0,avg=0;
for(i=0;i<5;i++){
    printf("enter any integer ");
    scanf("%d",&num);
    if(num>0){
        count++;
    sum=sum+num;
    

    }
    
}
avg=sum/count;
printf(" the number of positive integers is %d \n",count);
printf(" the avgerage of positive integers is %d \n",avg);

return 0;
}