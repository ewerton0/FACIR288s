#include <stdio.h>
#include <stdlib.h>

int main(){

    int v1, v2, v3, r1, r2, r3, r4;
    printf("digite o valor 1:\n");
    scanf("%i", &v1);
    printf("digite o valor 2:\n");
    scanf("%i", &v2);
    printf("digite o valor 3:\n");
    scanf("%i", &v3);
    if (v1>v2){
        if(v2>v3){
            r1 = v1+v2;
            printf("a soma dos dois maiores numeros eh: %i\n", r1);
        }else{
            r2 = v1 + v3;
            printf("a soma dos dois maiores numeros eh: %i\n", r2);}
    }else
        if (v1>v3){
            r3 = v1 + v2;
            printf("a soma dos dois maiores numero eh: %i\n", r3);
        }else{
            r4 = v2 + v3;
            printf("a soma dos dois maiores numeros eh: %i\n", r4);
        }
    return 0;

}
