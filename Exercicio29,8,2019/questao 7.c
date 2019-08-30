#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2, media_ponderada;
    printf("Digite o valor 1:\n");
    scanf("%f", &valor1);
    printf("Digite o valor 2:\n");
    scanf("%f", &valor2);
    media_ponderada = (valor1 * 2 + valor2 * 7)/9;
    printf("a media ponderada eh: %f", media_ponderada);
    return 0;
}
