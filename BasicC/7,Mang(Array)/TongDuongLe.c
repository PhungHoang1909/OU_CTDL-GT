#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && arr[i] > 0) {
            sum = sum + arr[i];
        }
    }
    printf("%d", sum);
    return 0;
}