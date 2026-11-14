#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    int role;

    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", &role);

    switch(role) {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid Role");
    }

    return 0;
}