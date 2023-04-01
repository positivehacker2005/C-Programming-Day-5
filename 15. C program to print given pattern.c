#include <stdio.h>

int main()
{
    int num, max, i, j;
    printf("Enter the number to be printed: ");
    scanf("%d", &num);
    printf("Enter the maximum number of times to be printed: ");
    scanf("%d", &max);
    for(i = 1; i <= max; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}

