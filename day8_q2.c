#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    if (num1 >= num2 && num1 >= num3)
        printf("Largest number is %d\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("Largest number is %d\n", num2);
    else
        printf("Largest number is %d\n", num3);

    return 0;
}
