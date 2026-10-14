#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];
    int isSymmetric = 1;

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Check symmetry
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    // Print result
    if(isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
