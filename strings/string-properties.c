#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50] = "manish is the best";

    /* Print string and its length */
    printf("%s\n", str);
    printf("Length of the string: %zu\n", strlen(str));

    /* sizeof demonstrations */
    printf("%zu\n", sizeof(str));        // total size of array
    printf("%zu\n", sizeof(str[0]));     // size of one character
    printf("%zu\n", sizeof(char));       // size of char
    printf("%zu\n", sizeof(int));        // size of int

    /* Safe copy */
    strncpy(str, "manish tiwari", sizeof(str) - 1);
    str[sizeof(str) - 1] = '\0';
    printf("%s\n", str);

    /* Safe concatenation */
    strncat(str, " legend is best of best",
            sizeof(str) - strlen(str) - 1);
    printf("%s\n", str);

    /* strchr */
    char *p = strchr(str, 'i');
    if (p)
        printf("%s\n", p);

    /* strrchr */
    p = strrchr(str, 'i');
    if (p)
        printf("%s\n", p);

    /* strstr */
    p = strstr(str, "bhoyar");
    if (p)
        printf("%s\n", p);
    else
        printf("Substring not found\n");

    /* strtok (modifies string) */
    char temp[50];
    strncpy(temp, str, sizeof(temp) - 1);
    temp[sizeof(temp) - 1] = '\0';

    char *token = strtok(temp, " ");
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
