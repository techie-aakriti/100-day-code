#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // input with spaces

    // In-place removal of vowels
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
              ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
            str[j++] = ch;   // copy only non-vowels
        }
    }
    str[j] = '\0';   // terminate new string

    printf("String without vowels: %s\n", str);
    return 0;
}
