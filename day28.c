#include <stdio.h>

int main() {
    int n, i, j, isprime;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        isprime = 1; 
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isprime = 0; 
                break;
            }
        }
        if(isprime == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
