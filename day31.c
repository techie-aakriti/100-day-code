#include <stdio.h>
int main() {
    int arr[100], n, i, search, found = 0;

    scanf("%d", &n);   
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &search);  

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Not Found\n");
    }
    return 0;
}
