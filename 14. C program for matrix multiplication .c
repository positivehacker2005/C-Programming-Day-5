#include <stdio.h>

void multiplyMatrices(int mat1[][2], int mat2[][2], int result[][2]);

int main()
{
    int mat1[2][2], mat2[2][2], result[2][2];
    int i, j;

    printf("Enter elements of matrix 1:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result);

    printf("Result of matrix multiplication:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int mat1[][2], int mat2[][2], int result[][2])
{
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            result[i][j] = mat1[i][0] * mat2[0][j] + mat1[i][1] * mat2[1][j];
        }
    }
}

