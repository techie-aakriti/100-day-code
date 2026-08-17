#include <stdio.h>
int main()
{
    int n, sum;
    printf("enter a number:");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf(" sum =%d natural number = %d\n", sum, n);

    return 0;
}