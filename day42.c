#include <stdio.h>
#include <ctype.h>  // for isalpha()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);   // string input

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);   // convert to lowercase for easy check

        if (isalpha(ch)) {   // check only alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
