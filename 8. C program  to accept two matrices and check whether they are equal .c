#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix1[10][10], matrix2[10][10];
    int equal = 1;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Compare the two matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0;
                break;
            }
        }
        if (equal == 0) {
            break;
        }
    }

    if (equal == 1) {
        printf("The two matrices are equal.\n");
    } else {
        printf("The two matrices are not equal.\n");
    }

    return 0;
}

