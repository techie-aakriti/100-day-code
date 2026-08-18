#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>

int main(void)
{
    char buf[128];
    long year;
    char *endptr;

    printf("Enter year: ");
    if (fgets(buf, sizeof buf, stdin) == NULL) {
        fprintf(stderr, "No input provided\n");
        return 1;
    }

    /* remove trailing newline if present */
    buf[strcspn(buf, "\n")] = '\0';

    errno = 0;
    year = strtol(buf, &endptr, 10);

    if (endptr == buf || *endptr != '\0') {
        fprintf(stderr, "Invalid input: not an integer\n");
        return 1;
    }
    if (errno == ERANGE && (year == LONG_MAX || year == LONG_MIN)) {
        fprintf(stderr, "Invalid input: number out of range\n");
        return 1;
    }

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%ld is a leap year\n", year);
    } else {
        printf("%ld is not a leap year\n", year);
    }

    return 0;
}
