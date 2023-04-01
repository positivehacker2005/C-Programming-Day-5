#include <stdio.h>

int main() {
    char symbol;
    int width, height, i, j;

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }

    return 0;
}

