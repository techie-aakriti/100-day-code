#include <stdio.h>

int main()
{
    FILE *fp;
    int n, roll;
    char name[50];
    float marks;

    fp = fopen("students.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter Name Roll Marks: ");
        scanf("%s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name = %s, Roll = %d, Marks = %.2f\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}