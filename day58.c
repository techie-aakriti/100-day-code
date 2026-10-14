#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int prefix[n], suffix[n];

    // Build prefix product
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Build suffix product
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Final answer
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    printf("Answer array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}
