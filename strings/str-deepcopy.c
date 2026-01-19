#include <stdio.h>

int main()
{
    char str[] = "manish";
    printf("Original string: %s\n", str);

    char str2[] = "manish";
    // Deep copy: copying each character individually
    str2[0] = 'M';
    printf("Modified deep copied string: %s\n", str2);
    printf("Original string after deep copy modification: %s\n", str);


    printf("%p\n", &str[0]);  // Address of original string
    printf("%p\n", &str2[0]); // Address of deep copied string

    return 0;
}