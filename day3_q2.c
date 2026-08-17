#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter a two number:");
    scanf("%d %d", &num1, &num2);
    int num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("swapping %d\n", num1);
    printf("swapping %d\n", num2);
    return 0;
}