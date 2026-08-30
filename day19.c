#include <stdio.h>
int main()
{
    int a, b, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= (a < b ? a : b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    lcm = (a * b) / hcf;
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}
