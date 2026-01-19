#include <stdio.h>

int main()
{
    FILE *file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "This line is appended.\n");

    fclose(file);
    return 0;
}
