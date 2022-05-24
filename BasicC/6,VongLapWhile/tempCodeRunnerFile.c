#include<stdio.h>

int main() {
    int i = 1;
    while (i >= 0){
        if (i == 51){
            break;
        }
        printf("%d ", i);
        i++;
    }
    return 0;
}