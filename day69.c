#include <stdio.h>

int main()
{
    int n, i, j, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        found = 0;

        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Repeated element = %d", arr[i]);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    return 0;
}
