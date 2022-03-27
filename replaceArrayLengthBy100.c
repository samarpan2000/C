#include<stdio.h>
int main(){
int arr[7]={0},i=0;
printf("ENTER THE ELEMENTS IN THE ARRAY \n");
for(i=0;i<7;i++){
    scanf("%d",&arr[i]);
}
printf(" THE ELEMENTS IN THE ARRAY is \n");
for(i=0;i<7;i++){
    
    if(arr[i]<=0||arr[i]==0){
        arr[i]=100;
    }
    printf(" %d ",arr[i]);
}


return 0;
}