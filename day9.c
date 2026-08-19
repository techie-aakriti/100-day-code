#include <stdio.h>
int main()
{
    int a, b, c, d, i, s = 0;
    float r1, r2;
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        for (i = 0; i * i <= d; i++)
            s = i;
        r1 = (-b + s) / (2.0 * a);
        r2 = (-b - s) / (2.0 * a);
        printf("Real and Distinct\n");
        printf("%.2f %.2f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2.0 * a);
        printf("Real and Equal\n");
        printf("%.2f", r1);
    }
    else
    {
        printf("Imaginary Roots");
    }

    return 0;
}