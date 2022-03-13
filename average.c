#include <stdio.h>
int main()
{
    float item_weight = 0.0f, sum = 0.0f, avg = 0.0f;
    int numOfPurchase = 0, i = 0;
    printf("enter the number of purchases ");
    scanf("%d", &numOfPurchase);
    for (i = 0; i < numOfPurchase; i++)
    {
        printf("enter the weight of each items ");
        scanf("%f", &item_weight);
        sum = sum + item_weight;
    }
    avg = sum / numOfPurchase;
    printf("the total number of purchases are %d\n", numOfPurchase);
    printf("the average of the item's weight is %3.2f ", avg);
    return 0;
}