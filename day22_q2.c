#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;
        sum += (float) numerator / denominator;
    }

    printf("Sum of series up to %d terms = %.2f\n", n, sum);
    return 0;
}
