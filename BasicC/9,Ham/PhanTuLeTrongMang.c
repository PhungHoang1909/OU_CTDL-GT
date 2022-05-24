#include<stdio.h>

int CountOdd(int arr[], int n){
    int count = 0;
    for (int i = 0; i <= n; i++){
        if (arr[i] % 2 != 0){
            count += 1;
        }
    }
    return count;
}
int main(){
    int n;
    int arr[100];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", CountOdd(arr, n));
    return 0;
}