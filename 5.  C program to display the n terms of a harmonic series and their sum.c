#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Harmonic series: ");
    for (i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i != n) {
            printf(" + ");
        }
        sum += 1.0 / i;
    }

    printf("\nSum of harmonic series: %f\n", sum);

    return 0;
}

