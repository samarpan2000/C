#include<stdio.h>
#include<math.h>
int main(){
int num=0,var=0;
printf("enter any number ");
scanf("%d",&num);
if(num<0){
var=abs(num);
printf(" the magnitude of the number i.e. |%d| is %d ",num,var);
}
else
printf(" the magnitude of the number i.e. |%d| is %d ",num,num);
return 0;
}