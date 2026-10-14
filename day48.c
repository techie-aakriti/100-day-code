#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, k, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // Lengths must be equal
    if (len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    // Try all possible rotations
    for (i = 0; i < len1; i++) {
        found = 1;
        for (j = 0; j < len2; j++) {
            k = (i + j) % len1;   // wrap around
            if (str1[k] != str2[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            printf("Strings ARE rotations of each other.\n");
            return 0;
        }
    }

    printf("Strings are NOT rotations of each other.\n");
    return 0;
}
