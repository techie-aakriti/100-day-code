#include <stdio.h>

enum Number {
    A = 10,
    B,
    C,
    D
};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
