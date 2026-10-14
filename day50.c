#include <stdio.h>

int main() {
    int dd, yyyy;
    char month[4] = "Apr";  // fixed month April

    printf("Enter date in format dd/04/yyyy: ");
    scanf("%d/04/%d", &dd, &yyyy);

    printf("Converted format: %02d-%s-%04d\n", dd, month, yyyy);

    return 0;
}
