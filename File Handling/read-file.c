#include <stdio.h>

int main()
{
    FILE *file;
    int ch;   

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("File contents:\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(file);
    return 0;
}
