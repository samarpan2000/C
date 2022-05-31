// 103.	Write a C program to which reads a sequence of integers and find the element which occurs most frequently
#include <stdio.h>
void main()
{

    int arr[100] = {10, 20, 20, 30, 40};
    // unique[100]={10,20,30,40};
    int unique[100];
    int freqArr[100];
    int i = 0, freq = 0, j = 0, idx = 0, o_idx = 0;
    int max = 0;
    int index = 0;
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] != unique[i])
        {
            unique[i] = arr[i];
        }
        else
            continue;
    }
    for (i = 0; i < 5; i++)
    {
        freq = 0;
        for (j = 0; j < 5; j++)
        {
            if (arr[j] == unique[i])
            {
                freq++;
            }
        }
        freqArr[idx++] = freq;
    }
    max = freqArr[0];

    for (i = 1; i < 5; i++)
    {
        if (freqArr[i] >= max)
        {
            max = freqArr[i];
            index = unique[o_idx++];
        }
    }
    printf("\n the freq. of %d is %d\n ", index, max);
}