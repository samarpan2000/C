#include<stdio.h>
int main(){
int i=0,num=0,var=0,arr1[5]={0},arr2[5]={0},j=0;
printf("enter any five digit integer ");
scanf("%d",&num);//eg. 1 2 3 4 5 
for(i=0;i<5;i++){
    var=num%10;
    arr1[i]=var;// 5 4 3 2 1
    num=num/10;
}
for(i=4;i>=0;i--){
    
    arr2[j]=arr1[i];//1 2 3 4 5
    j++;
}
for(i=0;i<5;i++){
    
    if(arr1[i]==arr2[i]){
        printf(" PALINDROME ");
        break;
    }
    else 
    printf(" NOT PALINDROME ");
    break;
}


return 0;
}