#include <stdio.h>

// Function to find first occurrence
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            ans = mid;
            high = mid - 1;  // keep searching left
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to find last occurrence
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            ans = mid;
            low = mid + 1;  // keep searching right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    if (first == -1 || last == -1)
        printf("-1, -1\n");
    else
        printf("First occurrence at index %d\nLast occurrence at index %d\n", first, last);

    return 0;
}
