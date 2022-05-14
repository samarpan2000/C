#include<stdio.h>
void main()
{
    int a=0,b=0;
    int *p1=0,*p2=0;
    int sum=0,div=0,mult=0,rem=0,sub=0;
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    sum=(*p1)+(*p2);
    sub=(*p1)-(*p2);
    mult=(*p1)*(*p2);
    div=(*p1)/(*p2);
    rem=(*p1)%(*p2);
    
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d x %d = %d\n",a,b,mult);
    printf("%d / %d = %d\n",a,b,div);
    printf("%d mod %d = %d\n",a,b,rem);

}