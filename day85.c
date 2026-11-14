#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    int choice;

    printf("Enter status (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &choice);

    switch(choice) {
        case SUCCESS:
            printf("Operation Successful");
            break;

        case FAILURE:
            printf("Operation Failed");
            break;

        case TIMEOUT:
            printf("Request Timed Out");
            break;

        default:
            printf("Invalid Status");
    }

    return 0;
}