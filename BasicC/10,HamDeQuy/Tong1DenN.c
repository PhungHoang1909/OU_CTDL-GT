#include<stdio.h>

int Sum(int n) {
    if (n == 0) return 0;
    return n + Sum(n - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", Sum(n));
    return 0;
}