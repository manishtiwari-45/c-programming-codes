// If file does not exist

#include <stdio.h>

int main()
{
    FILE *file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "Hello, this is written using w mode.\n");
    fprintf(file, "Old content (if any) is erased.\n");

    fclose(file);
    return 0;
}
