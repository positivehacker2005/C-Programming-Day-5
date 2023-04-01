#include <stdio.h>

int main() {
    int m, n, k, i;
    
    printf("Enter starting number (M): ");
    scanf("%d", &m);
    
    printf("Enter ending number (N): ");
    scanf("%d", &n);
    
    printf("Enter number of elements to skip (K): ");
    scanf("%d", &k);
    
    printf("The numbers from %d to %d by skipping %d elements in between are:\n", m, n, k);
    
    for (i = m; i <= n; i += k+1) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}

