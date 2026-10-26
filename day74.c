#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char sourceFile[100], destinationFile[100];
    char ch;

    scanf("%s", sourceFile);
    scanf("%s", destinationFile);

    src = fopen(sourceFile, "r");

    if (src == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    dest = fopen(destinationFile, "w");

    if (dest == NULL)
    {
        printf("Destination file cannot be opened.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}