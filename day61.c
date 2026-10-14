#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid input: k > n\n");
        return 0;
    }

    printf("First negative in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;  // default "0" if no negative
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;  // nearest negative found
            }
        }
        printf("%d ", firstNeg);
    }
    printf("\n");

    return 0;
}
