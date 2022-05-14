#include <stdio.h>
void main()
{
    int arr[5] = {121, 232, 422, 132, 541};
    int out_arr[5], palindrome[5];
    int idx = 0, o_idx = 0;
    int copy[5] = {0};
    int i = 0, flag = 0;

    // copying array elements into temporary array.
    for (idx = 0; idx < 5; idx++)
    {
        copy[idx] = arr[idx]; //{121, 233, 425, 132, 541}
    }

    // extracting last digit of each elements in an array.
    for (idx = 0; idx < 5; idx++)
    {
        for (i = 0; i < 1; i++)
        {
            out_arr[idx] = copy[idx] % 10;
        }
    }
    printf("\narray 1\n"); // printing array 1===> out_arr[5]={1, 3, 5, 2, 1}

    for (idx = 0; idx < 5; idx++)
    {
        printf(" %d ", out_arr[idx]);
    }

    printf("\n");

    // reversing the array and storing it in an array
    for (idx = 4; idx >= 0; idx--)
    {
        palindrome[o_idx++] = out_arr[idx];
    }
    printf("\narray 2\n"); // printing array 2====> palindrome[5]={1,2,5,3,1}

    for (idx = 0; idx < 5; idx++)
    {

        printf(" %d ", palindrome[idx]);
    }
    printf("\n");

    // checking whether its palindrome or not by traversing each elements in both array.
    for (idx = 0; idx < 5; idx++)
    {

        if (palindrome[idx] == out_arr[idx])
        {
            flag++;
            if (flag == 5 && idx == 4)
            {
                printf("\nTRUE\n");
                break;
            }
            else if (flag < 5 && idx == 4)
            {
                printf("\nFALSE\n");

                break;
            }
        }
    }
}
