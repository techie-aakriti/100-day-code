#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    int choice;

    printf("Enter month number (1-12): ");
    scanf("%d", &choice);

    m = choice;

    switch(m) {
        case JAN: printf("January has 31 days"); break;
        case FEB: printf("February has 28 days"); break;
        case MAR: printf("March has 31 days"); break;
        case APR: printf("April has 30 days"); break;
        case MAY: printf("May has 31 days"); break;
        case JUN: printf("June has 30 days"); break;
        case JUL: printf("July has 31 days"); break;
        case AUG: printf("August has 31 days"); break;
        case SEP: printf("September has 30 days"); break;
        case OCT: printf("October has 31 days"); break;
        case NOV: printf("November has 30 days"); break;
        case DEC: printf("December has 31 days"); break;
        default: printf("Invalid Month");
    }

    return 0;
}