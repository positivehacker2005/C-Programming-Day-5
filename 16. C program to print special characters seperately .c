#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(string, 100, stdin);

    int i = 0;
    while (string[i] != '\0') { 
        if (isalpha(string[i])) {
            alphabets++;
        }
        else if (isdigit(string[i])) {
            digits++;
        }
        else if (string[i] != ' ') {
            special++;
        }
        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}

