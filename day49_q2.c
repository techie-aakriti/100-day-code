#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a full name: ");
    scanf(" %[^\n]", str);   // input with spaces

    printf("Result: ");

    // First character is always an initial
    if (str[0] != ' ')
        printf("%c.", str[0]);

    // Traverse string
    for (i = 1; str[i] != '\0'; i++) {
        // If space found and next character exists
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            // Check if this is the last word (surname)
            int j = i+1;
            while (str[j] != ' ' && str[j] != '\0') {
                j++;
            }
            if (str[j] == '\0') {
                // Print surname in full
                printf("%s", &str[i+1]);
                break;
            } else {
                // Print initial with dot
                printf("%c.", str[i+1]);
            }
        }
    }

    printf("\n");
    return 0;
}
