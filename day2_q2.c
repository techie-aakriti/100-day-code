#include <stdio.h>
int main()
{
    float r, area, cricumference;
    printf("enter redius of cricle ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    cricumference = 2 * 3.14 * r;
    printf("area = %2f", area);
    printf("cricumference =%2f\n", cricumference);

    return 0;
}