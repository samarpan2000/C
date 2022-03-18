#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
float num=0,val=0;
printf("enter any integer ");
scanf("%f",&num);
val=sin(1/(num*180.0/3.14));
printf("VALUE IS %6.4f ",val);
return 0;
}