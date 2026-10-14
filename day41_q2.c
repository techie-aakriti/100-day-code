#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);   // string input

    // Loop until null character '\0'
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);   
    }

    return 0;
}
