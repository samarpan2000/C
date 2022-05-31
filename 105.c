// Write a C program to extract words of 3 to 6 characters length from a given sentence not more than 1024 characters.
#include <stdio.h>
#include <string.h>

void main()
{
    char arr[1000];
    int i = 0;
    int start = 0, end = 0;
    printf("enter any string ");
    fgets(arr, 1000, stdin);
    printf("enter the start position for extracting character ");
    scanf("%d", &start);
    printf("enter the end position for extracting character ");
    scanf("%d", &end);
    printf("\nthe string before extraction is \n");

    printf("%s", arr);
    printf("extracted string\n");

    for (i = start; i <= end; i++)
    {
        printf("%c",arr[i]);
    }
}

