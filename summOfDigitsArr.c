// summation of digits of each elements in an array in new line.
#include <stdio.h>
void main()
{
    int arr[100], copy[100], var[100], display[100];
    int i = 0, j = 0;
    int sumOfDigits = 0;
    int choice = 0;
    // taking size of arr from user.
    printf("enter the size of the array ");
    scanf("%d", &choice);
    // taking elements from user.
    printf("\n enter the elements of array \n");
    for (i = 0; i < choice; i++)
    {
        scanf("%d", &arr[i]);
    }

    // storing main array elem. into a temp array
    for (i = 0; i < choice; i++)
    {
        copy[i] = arr[i];
    }
    // finding sumOfDigits
    for (i = 0; i < choice; i++)
    {
        sumOfDigits = 0;

        while (copy[i] != 0)
        {
            var[i] = copy[i] % 10;
            sumOfDigits += var[i];
            copy[i] = copy[i] / 10;
        }
        display[i] = sumOfDigits; // storing each summed up digit into display array for output.
    }
    printf("\n");
    printf("ORIGINAL ARRAY :- ");
    // printing the main array.
    for (i = 0; i < choice; i++)
    {
        printf(" %d ", arr[i]);
    }
    //printing display array
    printf("\nsum of digits of each elements \n");
    for (i = 0; i < choice; i++)
    {
        printf(" %d ", display[i]);
    }
}