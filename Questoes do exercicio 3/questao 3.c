#include <stdio.h>
#include <stdlib.h>

int main(){

    float qa, qmax, qmin, qmedia;
    printf("digite a quantidade atual em estoque:\n");
    scanf("%f", &qa);
    printf("digite a quantidade maxima no estoque:\n");
    scanf("%f", &qmax);
    printf("digite a quantidade minima no estoque:\n");
    scanf("%f", &qmin);
    qmedia = (qmax + qmin)/2;
    if (qa >= qmedia){
        printf("nao efetuar compra");
    }else{
        printf("efetuar compra");
        }
    return 0;
}
