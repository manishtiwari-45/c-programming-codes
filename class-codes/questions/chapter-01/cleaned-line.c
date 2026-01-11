#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
int remove_trailing(char line[], int len);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        len = remove_trailing(line, len);
        if (len > 0) {
            printf("%s", line);
        }
    }
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0;
         i < lim - 1 && (c = getchar()) != EOF && c != '\n';
         ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

int remove_trailing(char s[], int len)
{
    int i = len - 1;

    if (i >= 0 && s[i] == '\n')
        --i;

    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;

    if (i >= 0) {
        s[i + 1] = '\n';
        s[i + 2] = '\0';
        return i + 2;
    }

    s[0] = '\0';
    return 0;
}
