#include <stdio.h>
#include <ctype.h>  // for isdigit(), isalpha()

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // input with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (!isalpha(str[i])) {
            special++;
        }
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
