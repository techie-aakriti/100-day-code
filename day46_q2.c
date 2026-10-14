#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};   // frequency array for a-z
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // input with spaces

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {   // second time → repeating
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
