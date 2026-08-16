#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two number");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("sum = %d\n", sum);
    int difference = a - b;
    printf("difference = %d\n", difference);
    int product = a * b;
    printf("product = %d\n", product);

    if (b != 0)
    {
        printf("quotient = %.2f\n", (float)a / b);
    }

    else
    {
        printf("quotient = undefined");
    }
    return 0;
}
