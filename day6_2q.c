#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if (num != 0)
    {
        if (num > 0)
        {
            printf("positive number\n");
        }
        else
        {
            printf("negative number\n");
        }
    }
    else
    {
        printf("zero");
    }
    return 0;
}