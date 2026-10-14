#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;  // nearest greater on left found
            }
        }
        if (i == n - 1)
            printf("%d\n", prev);  // last element, no comma
        else
            printf("%d, ", prev);
    }

    return 0;
}
