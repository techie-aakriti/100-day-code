#include <stdio.h>
int main() {
    int num, binary, digit;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    printf("1's Complement = ");
    while (num > 0) {
        digit = num % 10;   
        if (digit == 0)
            printf("1");
        else
            printf("0");
        num = num / 10;
    }
    return 0;
}
