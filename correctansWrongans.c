#include<stdio.h>
int main(){
int p=0,q=0,r=0,s=0,sumOfrs=0,sumOfpq=0;
printf("enter the value of any even integer ");
scanf("%d",&p);
printf("enter the value of any positive integer ");
scanf("%d",&q);
printf("enter the value of any positive integer ");
scanf("%d",&r);
printf("enter the value of any positive integer ");
scanf("%d",&s);
sumOfrs=r+s;
sumOfpq=p+q;
if(q>r&&s>p&&sumOfrs>sumOfpq)
printf("CORRECT VALUES");
else
printf("WRONG VALUES");

return 0;
}