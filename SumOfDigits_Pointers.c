#include<stdio.h>
void main(){
    int a=0;
    int i=0;
    int sum=0,temp=0,var=0;
    int *p1=0;
    printf("enter any 5 digit number ");
    scanf("%d",&a);
    p1=&a;
    temp=(*p1);
    for(i=0;i<5;i++){
        var=temp%10;
        sum+=var;
        temp=temp/10;
    }
    printf("%d",sum);
}
