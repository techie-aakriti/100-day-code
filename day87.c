#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int a, b, choice;

    printf("1.ADD\n2.SUBTRACT\n3.MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch(choice) {
        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}