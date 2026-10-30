#include <stdio.h>

int main()
{
    char filename[100], ch;
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");
    printf("File Content:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
