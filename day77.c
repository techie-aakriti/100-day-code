#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");

    if (fin == NULL)
    {
        printf("Error: Cannot open input.txt");
        return 1;
    }

    fout = fopen("output.txt", "w");

    while ((ch = fgetc(fin)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Data converted to uppercase and written to output.txt");

    return 0;
}