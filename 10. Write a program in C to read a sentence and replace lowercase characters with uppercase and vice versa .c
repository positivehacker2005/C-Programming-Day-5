#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    while (sentence[i]) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
        i++;
    }

    printf("Modified sentence: %s\n", sentence);

    return 0;
}

