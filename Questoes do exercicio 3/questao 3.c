#include <stdio.h>
#include <stdlib.h>

int main(){

    int qa, qmax, qmin, qmedia;
    printf("digite a quantidade atual em estoque:\n");
    scanf("%i", &qa);
    printf("digite a quantidade maxima no estoque:\n");
    scanf("%i", &qmax);
    printf("digite a quantidade minima no estoque:\n");
    scanf("%i", &qmin);
    qmedia = (qmax + qmin)/2;
    if (qa >= qmedia){
        printf("nao efetuar compra");
    }else{
        printf("efetuar compra");
        }
    return 0;
}
