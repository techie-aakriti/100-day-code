#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("enter a length:");
    scanf("%d", &length);
    printf("enter breadth");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("area = %d\n", area);
    printf("parimeter = %d\n", perimeter);

    return 0;
}