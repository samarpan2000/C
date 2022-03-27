#include<stdio.h>
#include<math.h>
int main(){
float i=0.0f,var=0.0f,num=2.0f;
printf("\n 2s TABLE  power 0 to 10 IN POSITIVE \n");
for(i=0.0f;i<10.0f;i++){
    var=pow(num,i);
printf("2 TO THE POWER %3.2f = %3.2f \n",i,var);
}
printf("\n 2s TABLE  power 0 to 10 IN NEGATIVE \n");
printf("\n");

for(i=0.0f;i<10.0f;i++){
    var=pow(num,i);
printf("2 TO THE POWER -%3.2f = -%3.2f \n",i,var);
}
return 0;
}