#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role role;

    int choice;
    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", &choice);

    role = choice;

    switch(role) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.");
            break;
        case USER:
            printf("Welcome User! Limited access granted.");
            break;
        case GUEST:
            printf("Welcome Guest! View-only access granted.");
            break;
        default:
            printf("Invalid Role");
    }

    return 0;
}