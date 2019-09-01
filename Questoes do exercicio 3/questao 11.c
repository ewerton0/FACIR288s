#include <stdio.h>
#include <stdlib.h>

int main(){

    int h1, h2, m1, m2, xh, yh, xm, ym;
    printf("digite a idade do primeiro homem:\n");
    scanf("%i", &h1);
    printf("digite a idade do segundo homem:\n");
    scanf("%i", &h2);
    printf("digite a idade da primeira mulher:\n");
    scanf("%i", &m1);
    printf("digite a idade da segunda mulher:\n");
    scanf("%i", &m2);
    if (h1>h2){
        xh=h1;
        yh=h2;
    }else{
        xh=h2;
        yh=h1;
    }if (m1>m2){
        xm=m1;
        ym=m2;
    }else{
        xm=m2;
        ym=m1;}

    printf("a soma dos homem mais velho com a mulher mais nova eh: %i \n", xh + ym);
    printf("o produto do homem mais novo com a mulher mais velha eh: %i \n", yh * xm);





    return 0;

}

