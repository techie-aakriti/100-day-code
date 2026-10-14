#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);   // input with spaces

    while (str[end] != '\0') {
        // find end of word
        if (str[end] == ' ' || str[end+1] == '\0') {
            int wordEnd = (str[end] == ' ') ? end - 1 : end;
            // reverse current word
            for (int i = start, j = wordEnd; i < j; i++, j--) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            start = end + 1;  // next word start
        }
        end++;
    }

    printf("Sentence with each word reversed: %s\n", str);
    return 0;
}
