#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, divisao;
    printf("Digite o valor 1:\n");
    scanf("%i", &valor1);
    printf("Digite o valor 2:\n");
    scanf("%i", &valor2);
    while (valor2 == 0){
        printf("Digite outro valor:\n");
        scanf("%i", &valor2);
    divisao = valor1 / valor2;
    printf("Divisao = %i", divisao);
    }
    return 0;
}
