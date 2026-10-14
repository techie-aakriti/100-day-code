#include <stdio.h>

int pivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;  // sum of 1..n
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x;  // sum of 1..x
        int rightSum = totalSum - leftSum + x;  // sum of x..n
        if (leftSum == rightSum) {
            return x;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = pivotInteger(n);

    if (pivot == -1)
        printf("-1\n");
    else
        printf("Pivot integer is %d\n", pivot);

    return 0;
}
