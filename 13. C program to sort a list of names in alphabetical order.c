#include <stdio.h>
#include <string.h>

#define MAX_NAMES 10
#define MAX_NAME_LENGTH 20

void sortNames(char names[][MAX_NAME_LENGTH], int numNames, int ascending);

int main()
{
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int numNames, i, ascending;

    printf("Enter number of names (up to %d): ", MAX_NAMES);
    scanf("%d", &numNames);

    printf("Enter %d names:\n", numNames);
    for(i = 0; i < numNames; i++)
    {
        scanf("%s", names[i]);
    }

    printf("Sort names in ascending (1) or descending (0) order: ");
    scanf("%d", &ascending);

    sortNames(names, numNames, ascending);

    printf("\nSorted names:\n");
    for(i = 0; i < numNames; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}

void sortNames(char names[][MAX_NAME_LENGTH], int numNames, int ascending)
{
    int i, j;
    char temp[MAX_NAME_LENGTH];

    for(i = 0; i < numNames-1; i++)
    {
        for(j = i+1; j < numNames; j++)
        {
            if((ascending && strcmp(names[i], names[j]) > 0) ||
               (!ascending && strcmp(names[i], names[j]) < 0))
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

