#include <stdio.h>
int main()
{
    float P, R, SI, CI;
    int T;

    printf("Enter Principal (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R in %%): ");
    scanf("%f", &R);

    printf("Enter Time (T in years): ");
    scanf("%d", &T);

    SI = (P * R * T) / 100;

    CI = P * pow((1 + R / 100), T) - P;

    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f\n", CI);

    return 0;
}
