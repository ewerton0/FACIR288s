#include <stdio.h>>
#include <stdlib.h>

int main(){
    int v1, v2, d;
    printf("digite dois valores:\n");
    scanf("%i %i", &v1, &v2);
    while (v2==0){
        printf("digite outro valor diferente de zero:\n");
        scanf("%i", &v2);
    }
    d=v1/v2;
    printf("o resultado da divisao dos dois numeros eh: %i\n", d);

    return 0;
    }
