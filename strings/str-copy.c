#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "manish tiwari";
    char *s2 = s1; // stores address as pointer
    // address of a string is a, address of its first character
    printf("%s\n",s1);
    s1[0] = 'M';
    printf("%s\n",s1);
    printf("%s\n",s2);

    printf("%c\n",s1[0]);
    printf("%d\n",s1[0]);
    printf("%p\n",&s1[0]); //(char*)
    printf("%p\n",s2); // same as above (char *)
    printf("%p\n",&s2); // char **

    printf("%p\n",&s1[0]);
    printf("%p\n",&s2[0]); // address are same

    return 0;
}