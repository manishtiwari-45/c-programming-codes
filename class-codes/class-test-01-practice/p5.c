// reverses a string without reversing the newline
#include<stdio.h>
#define MAX 100

void reverse(char s[]){
    int left, right;
    left = right = 0;
    for(int i = 0; s[i] != '\0'; i++){
        right++;
    }
    right--;
    if(s[right] == '\n'){
        right--;
    }

    while(left < right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char s[MAX];
    int c, i = 0;

    while ((c = getchar()) != EOF && c != '\n' && i < MAX - 1) {
        s[i++] = c;
    }
    if (c == '\n')
        s[i++] = '\n';
    s[i] = '\0';   

    reverse(s);

    for (int j = 0; s[j] != '\0'; j++)
        putchar(s[j]);

    return 0;
}

