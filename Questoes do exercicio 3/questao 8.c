#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;
    printf("digite o valor 1:\n");
    scanf("%i", &a);
    printf("digite o valor 2:\n");
    scanf("%i", &b);
    printf("digite o valor 3:\n");
    scanf("%i", &c);
    if(a<b+c && b<a+c && c<a+b){
        printf("forma um triangulo");

    }else{
        printf("nao forma um triangulo");}

        return 0;
}


