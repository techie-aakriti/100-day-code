#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // candidate for ceil
            high = mid - 1;  // try to find smaller index
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int idx = ceilIndex(arr, n, x);

    if (idx == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[idx], idx);

    return 0;
}
