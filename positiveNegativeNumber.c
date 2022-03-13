#include<stdio.h>
int main(){
int a=0,countPos=0,countNeg=0,i=0;
for(i=0;i<5;i++){
printf("enter the value of any positive/negative integer ");
scanf("%d",&a);
if(a>0){
countPos++;

}
else if(a<0){
countNeg++;
}
}
printf("the number of positive integers are %d \n",countPos);
printf("the number of negative integers are %d \n",countNeg);

return 0;
}