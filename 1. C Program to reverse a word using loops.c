#include <stdio.h>
#include <string.h>

int main() {
    char word[50], reverse[50];
    int i, j;
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    j = strlen(word) - 1;
    
    for (i = 0; i < strlen(word); i++) {
        reverse[i] = word[j];
        j--;
    }
    
    printf("The reverse of the word is: %s\n", reverse);
    
    return 0;
}
