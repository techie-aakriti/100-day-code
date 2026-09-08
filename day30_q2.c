#include <stdio.h>
int main() {
    int arr[10], n, i, pos=0, neg=0, zero=0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive count = %d\n", pos);
    printf("Negative count = %d\n", neg);
    printf("Zero count = %d\n", zero);
    return 0;
}
