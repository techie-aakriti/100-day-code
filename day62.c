#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int maxSoFar = arr[0];   // largest sum found so far
    int currMax = arr[0];    // current subarray sum

    for (int i = 1; i < n; i++) {
        // either extend the current subarray or start new from arr[i]
        currMax = (arr[i] > currMax + arr[i]) ? arr[i] : currMax + arr[i];
        if (currMax > maxSoFar) {
            maxSoFar = currMax;
        }
    }

    return maxSoFar;
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

    int result = maxSubarraySum(arr, n);
    printf("Maximum subarray sum = %d\n", result);

    return 0;
}
