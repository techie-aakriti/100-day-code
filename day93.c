#include <stdio.h>

struct Student
{
    char name[30];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %f",
              s[i].name,
              &s[i].roll_no,
              &s[i].marks);
    }

    printf("Student Records\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}