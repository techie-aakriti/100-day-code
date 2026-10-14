#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);   // input with spaces

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t') {
            word[j++] = str[i];   // build current word
        } else {
            word[j] = '\0';       // end current word
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        }
        i++;
    }

    // check last word
    word[j] = '\0';
    if (j > maxLen) {
        maxLen = j;
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
