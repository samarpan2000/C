#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, varSquares = 0, varCubes = 0, var = 0;
    
    printf("\n=================================================== \n");
    printf("\n THE SQUARES AND CUBES OF NUMBERS FROM 0 - 20 ARE \n");
    printf("\n=================================================== \n");
    printf("\nNUMBER                SQUARES             CUBES\n");
    printf("------------------------------------------------------\n");
    for (i = 0; i <= 20; i++)
    {
        var = i;
        varSquares = pow(i, 2);
        varCubes = pow(i, 3);
        printf("%d                        %d                    %d\n", var, varSquares, varCubes);
    }

    return 0;
}