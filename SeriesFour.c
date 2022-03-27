#include <stdio.h>
#include<math.h> 
int main()
{
 int i=0,numChoice=0,num=1,sum=0;
 printf("enter the integer ");
 scanf("%d",&numChoice);
 if(numChoice <=0 || numChoice >100){
 printf("please enter the integer within range 1-100");
 }
 else
{
 for(i=1;i<numChoice;i++)
 {
 	sum=sum+(pow(num,4));
 	num=num+i;
 	}
 	printf("sum is %d ",sum);
 	}
	return 0;
}
 
