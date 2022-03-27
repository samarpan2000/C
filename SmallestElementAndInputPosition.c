#include <stdio.h>
int main()
{
    int arr[6] = {0}, i = 0, min = 65536, low_index = 0;
    printf("enter the  elements \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if(i==0){
            printf("array ---> ");
            
        }
        
        printf(" %d ", arr[i]);
        
        if(i==5){
            printf("\n");
        }
        
    }
    
    for (i = 0; i < 6; i++)
    {
        if(i==0){
        printf("index ---> ");
            
        }
        
        printf(" %d ", i);
        if (arr[i] < min)
        {
            min = arr[i];
            low_index = i;
        }
    }
    printf("\nthe smallest element is %d \n", min);
    printf(" the index is %d \n", low_index);

    return 0;
}