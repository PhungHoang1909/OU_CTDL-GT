#include <stdio.h>

int main() {
    int n, k;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        } 
    }
    printf("%d", count);
    return 0;
}