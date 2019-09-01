#include <stdio.h>
#include <stdlib.h>

int main(){

    int v1, v2;
    printf("digite o valor 1:\n");
    scanf("%i", &v1);
    printf("digite o valor 2:\n");
    scanf("%i", &v2);
    if (v1==v2){
        printf("numeros iguais");

    }else{
        if (v1>v2){
            printf("primeiro maior");

        }else{
            printf("segundo maior");}}
        return 0;
}

