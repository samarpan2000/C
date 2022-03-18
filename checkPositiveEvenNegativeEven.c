#include<stdio.h>
int main(){
int num=0;
printf("enter any integer of your choice ");
scanf("%d",&num);
if(num>0&&num%2==0){
    printf("POSITIVE EVEN \n");
}

else if(num<0&&num%2==0){
    printf("NEGATIVE EVEN \n");
}

else if(num>0&&num%2!=0){
    printf("POSITIVE ODD \n");
}

else if(num<0&&num%2!=0){
    printf("NEGATIVE ODD \n");
}

else if(num==0){
    printf(" EVEN \n");
}
return 0;
}