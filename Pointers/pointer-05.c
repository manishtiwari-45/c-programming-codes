#include <stdio.h>

int main(){
    char str[] = "Computer Organisation 4 sem";
    char *p = str;

    for(int i = 0; i < 28 ; i++){
        if(p[i] != ' ' && (p[i] >= 'a' && p[i] <= 'z')){
            p[i] = p[i]-'a'+'A';
        }
        
    }
    printf("%s\n", str);
}