#include<stdio.h>

int main(){
    int a[1000][1000];
    int n, m;
    int sum = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            sum = sum + a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}