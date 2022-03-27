#include <stdio.h>
#include<stdlib.h>
int main()
{
    int sum = 0, avg = 0, num[887] = {0}, numChoice = 0, i = 0, j = 0, count = 0;
    printf("ENTER HOW MANY NUMBERS YOU WANT TO PUT ");
    if(numChoice<888){
    scanf("%d", &numChoice);
    
    }
    else 
    exit(0);

    printf("ENTER THE NUMBERS \n");
    for (i = 0; i < numChoice; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < numChoice; i++)
    {
        for (j = 0; j < numChoice; j++)
        {

            sum = sum + num[i];
            count++;
        }
        avg = sum / count;
    }
    printf(" average is %d ", avg);
    return 0;
}