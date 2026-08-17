#include <stdio.h>
int main()
{
    int celsius;
    float fahrenheit;
    printf("enter temperature of celsius:");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("temperature in fahrenheit = %.2f\n", fahrenheit);

    return 0;
}