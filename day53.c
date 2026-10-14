#include <stdio.h>

int pivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Step 1: Calculate total sum
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Step 2: Traverse and check pivot condition
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i;  // leftmost pivot index
        }
        leftSum += arr[i];
    }

    return -1; // no pivot index
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int idx = pivotIndex(arr, n);

    if (idx == -1)
        printf("-1\n");
    else
        printf("Pivot index is %d\n", idx);

    return 0;
}
