#include<stdio.h>

int main() {
    int len = 0;
    char str[100];
    scanf("%s", str);
    while (str[len] != '\0') {
        len++;
    }
    printf("%d", len);
    return 0;
}