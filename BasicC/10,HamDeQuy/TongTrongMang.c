#include<stdio.h>

int Sum(int a[1000], int n) {
    if (n == 1) return a[0];
    return a[n - 1] + Sum(a, n - 1);
}
int main() {
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", Sum(arr, n));
    return 0;
}