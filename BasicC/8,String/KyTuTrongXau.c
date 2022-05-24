#include<stdio.h>

int main() {
    char str[100];
    int k;
    scanf("%s", str);
    scanf("%d", &k);
    printf("%c", str[k - 1]);
    return 0;
}