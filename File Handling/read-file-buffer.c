#include <stdio.h>

int main()
{
    FILE *file = fopen("file.txt", "r");
    char str[100];

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    printf("File Contents(Buffer): \n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
    printf("\n");
    fclose(file);
    return 0;
}
