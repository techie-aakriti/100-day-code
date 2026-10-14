#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // input with spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';   // replace space with hyphen
        }
    }

    printf("Modified string: %s\n", str);
    return 0;
}
