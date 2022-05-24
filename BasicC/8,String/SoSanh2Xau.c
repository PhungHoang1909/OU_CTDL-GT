#include<stdio.h>
#include<string.h>

int main(){
    char s1[100];
    char s2[100];
    scanf("%s%s", s1, s2);
    if (strcmp(s1, s2) == 0){
        printf("Two people having the same name");
    }else {
        printf("Two people don't have the same name");
    }
    return 0;
}