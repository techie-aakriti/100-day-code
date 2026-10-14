#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Print result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
