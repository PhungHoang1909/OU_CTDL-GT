#include<stdio.h>

double Cir(double r){
    return 2 * 3.14 * r;
}
int main(){
    double r;
    scanf("%lf", &r);
    printf("%f", Cir(r));
    return 0;
}