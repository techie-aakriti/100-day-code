#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("enter  number:");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + (2 * i - 1);
    }
    printf("sum of first number %d odd number = %d\n",num,sum);

    return 0;
}
