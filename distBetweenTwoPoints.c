#include<stdio.h>
#include<math.h>
int main(){
int x1=0,x2=0,y1=0,y2=0;
double dist=0.0;
printf("enter the value of x1 ");
scanf("%d",&x1);
printf("enter the value of x2 ");
scanf("%d",&x2);
printf("enter the value of y1 ");
scanf("%d",&y1);
printf("enter the value of y2 ");
scanf("%d",&y2);
dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("the dist. between the two points (%d,%d) and  (%d,%d) is %f",x1,x2,y1,y2,dist);
return 0;
}