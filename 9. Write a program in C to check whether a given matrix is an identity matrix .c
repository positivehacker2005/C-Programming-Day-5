#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    int is_identity = 1;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (rows != cols) {
        is_identity = 0;
    } else {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (i == j && matrix[i][j] != 1) {
                    is_identity = 0;
                    break;
                } else if (i != j && matrix[i][j] != 0) {
                    is_identity = 0;
                    break;
                }
            }
            if (is_identity == 0) {
                break;
            }
        }
    }

    if (is_identity == 1) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}

