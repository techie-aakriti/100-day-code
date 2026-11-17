#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

struct Student getTopStudent(struct Student s1, struct Student s2)
{
    if(s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main()
{
    struct Student s1 = {101, "Rahul", 85.5};
    struct Student s2 = {102, "Priya", 92.0};

    struct Student top = getTopStudent(s1, s2);

    printf("Top Student Details:\n");
    printf("Roll No: %d\n", top.roll);
    printf("Name: %s\n", top.name);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}