#include <stdio.h>
int main()
{
    int num, digit, count[10] = {0}, max = 0, result, i;

    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }
    printf("%d\n", result);
    return 0;
}
