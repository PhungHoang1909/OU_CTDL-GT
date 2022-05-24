#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 0 && a <= 10) {
        printf("The score is valid");
    }else {
        printf("The score is not valid");
    }
    return 0;
}