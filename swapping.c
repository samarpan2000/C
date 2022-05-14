#include<stdio.h>
void main()
{
    int arr[6]={1,2,3,4,5,6};
    int i=0,j=0;
    int rev=0;
    int out[6];
    for(i=0;i<6;i+=2)
    {
        arr[i]=arr[i]+arr[i+1];
        arr[i+1]=arr[i]-arr[i+1];
        arr[i]=arr[i]-arr[i+1];

    }
    for(i=0;i<6;i++){
        printf(" %d ",arr[i]);
    }
}
