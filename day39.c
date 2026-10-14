#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int distinct = 1; // assume distinct until proven otherwise

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check distinctness of diagonal elements
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    // Print result
    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
