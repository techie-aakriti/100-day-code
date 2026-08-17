#include <stdio.h>
int main()
{
    char c;
    printf("enter a charater\n");
    scanf("%c", &c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'o' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

        printf("vowel\n");

    else
    {
        printf("consonant\n");
    }
    return 0;
}