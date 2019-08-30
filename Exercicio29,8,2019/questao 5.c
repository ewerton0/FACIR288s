#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, soma;
    printf("Digite o valor 1:\n");
    scanf("%i", &valor1);
    printf("Digite o valor 2:\n");
    scanf("%i", &valor2);
    soma = valor1 + valor2;
    printf("soma = %i", soma);
    return 0;
}
