#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, multiplicacao;
    printf("Digite o valor 1:\n");
    scanf("%i", &valor1);
    printf("Digite o valor 2:\n");
    scanf("%i", &valor2);
    multiplicacao = valor1 * valor2;
    printf("multiplicacao = %i", multiplicacao);
    return 0;
}
