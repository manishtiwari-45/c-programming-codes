#include <stdio.h>

int main()
{
    FILE *file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File does not exist\n");
        return 1;
    }

    fclose(file);

    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error reopening file\n");
        return 1;
    }

    fprintf(file, "Written only because file existed.\n");

    fclose(file);
    return 0;
}
