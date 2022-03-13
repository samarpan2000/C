#include<stdio.h>
int main(){
int integer=0;
printf("enter the value of any even integer ");
scanf("%d",&integer);
if(integer>=0&&integer<=10){
    printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 0-10 \n");
}
else if(integer>=10&&integer<=20){
    printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 10-20 \n");
}

else if (integer>=20&&integer<=30)
printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 20-30 \n");

else if(integer>=30&&integer<=40){
    printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 30-40 \n");
}
else if(integer>=40&&integer<=50){
    printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 40-50 \n");
}
else if(integer>=50&&integer<=60){
    printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 50-60 \n");
}
else if(integer>=60&&integer<=70){
    printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 60-70 \n");
}
else if(integer>=70&&integer<=80){
    printf("RANGE OF THE NUMBER ENTERED IS BETWEEN 70-80 \n");
}
else if (integer<0||integer>80)
printf("OUT OF RANGE...PLEASE INPUT CORRECT VALUE");

return 0;
}