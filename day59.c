#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (k > n) return -1;  // invalid case

    // Step 1: Compute sum of first window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // add new, remove old
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

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

    int result = maxSubarraySum(arr, n, k);

    if (result == -1)
        printf("Invalid input: k > n\n");
    else
        printf("Maximum sum of subarray of size %d = %d\n", k, result);

    return 0;
}
