#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, alphabets, digits, special;

    alphabets = digits = special = i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (str[i] != ' ') {
            special++;
        }
        i++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}

