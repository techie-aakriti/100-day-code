#include <stdio.h>
int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &key);

    int pos = binarySearch(arr, n, key);
    if (pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("Not found\n");
    return 0;
}
