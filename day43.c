#include <stdio.h>
#include <string.h>  // optional if you want strlen, but we can avoid it

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    // find length manually (without strlen)
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // reverse logic: swap characters
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
