#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        if (s[i] == '3'){
            s[i] = 'e';
        }
    }
    printf("%s", s);
    return 0;
}