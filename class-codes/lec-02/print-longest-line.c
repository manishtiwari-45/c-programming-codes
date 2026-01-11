#include<stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
int main()
{


    return 0;
}
// int getline(char s[], int maxline)
// {
//     int count;
//     int c;
//     for(count = 1; count < maxline -1 && (c = getchar()) != EOF && c != '\n'; ++count)
//         s[count] = c;
//     if(c == '\n'){
//         s[count] = c;
//         ++count;
//     }
//     s[count] = '\0';
//     return count;
// }

void copy(char to[], char from[])
{

}
int getline(char[s]){
    int c;
    for(i = 0; i < lim -1; ++i){
        if(c = getchar() != '\n'){
            if(c != EOF){
                break;
            }
        }
        s[i] = c
        
    }
}