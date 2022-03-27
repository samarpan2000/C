#include <stdio.h>
int main()
{
    int numArray_a_z[52] = {0}, numArray_A_Z[52] = {0}, i = 0, j = 97, k = 65;
    char A_Z[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (i = 0; i < 26; i++)
    {
        numArray_a_z[i] = j;
        j++;
    }
    for (i = 26; i < 52; i++)
    {
        numArray_A_Z[i] = k;
        k++;
    }

    printf("THE CHARACTERS AND ITS INTEGER EQUIVALENT of [a-z] IS \n");
    for (i = 0; i < 26; i++)
    {
        printf(" %c --- %d \n", A_Z[i], numArray_a_z[i]);
    }
    printf("\n THE CHARACTERS AND ITS INTEGER EQUIVALENT of [a-z] IS \n");
    for (i = 26; i < 52; i++)
    {
        printf(" %c --- %d \n", A_Z[i], numArray_A_Z[i]);
    }

    return 0;
}