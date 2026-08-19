#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("grade A");
    }
    else if (marks >= 80)
    {
        printf("grade B");
    }
    else if (marks >= 70)
    {
        printf("grade >= 60");
    }
    else
    {
        printf("fail");
    }
    return 0;
}