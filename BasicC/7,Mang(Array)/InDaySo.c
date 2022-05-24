#include <stdio.h>

int main() {
    int n;
    int a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] <= 10) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}