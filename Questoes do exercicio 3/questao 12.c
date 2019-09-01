#include <stdio.h>>
#include <stdlib.h>

int main(){

    char dp[20];
    int qa, pu, d, t, tp;
    printf("digite a descricao do produto:\n");
    scanf("%s", &dp);
    printf("digite a quantidade adquirida:\n");
    scanf("%i", &qa);
    printf("digite o preco unitario:\n");
    scanf("%i", &pu);
    t=qa*pu;
    if (qa<=5){
        d=t*0.02;
        tp=t-d;
        printf("o valor total eh de : %i\n o desconto foi de: %i\n o total a pagar eh: %i\n", t, d, tp);
    }else{
        if(qa>10){
            d=t*0.05;
            tp=t-d;
            printf("o valor total eh de : %i\n o desconto foi de: %i\n o total a pagar eh: %i\n", t, d, tp);
        }else{
            d=t*0.02;
            tp=t-d;
            printf("o valor total eh de : %i\n o desconto foi de: %i\n o total a pagar eh: %i\n", t, d, tp);}
    }
    return 0;
}
