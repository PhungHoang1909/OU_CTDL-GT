#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    int MaxValue = a[0];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        if (a[i] > MaxValue){
            MaxValue = a[i];
        }
    }
    printf("%d", MaxValue);
    return 0;
}