#include <stdio.h>
int main()
{
    int num;
    int fact = 1;
    printf("enter factorial number:");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("fact = %d \n", fact);
    return 0;
}