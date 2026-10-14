#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a full name: ");
    scanf(" %[^\n]", str);   // input with spaces

    printf("Initials: ");

    // First character is always an initial
    if (str[0] != ' ')
        printf("%c", str[0]);

    // Check for spaces → next character is initial
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            printf("%c", str[i+1]);
        }
    }

    printf("\n");
    return 0;
}
