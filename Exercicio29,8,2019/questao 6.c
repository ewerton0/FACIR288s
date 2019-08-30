#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2, media;
    printf("Digite o valor 1:\n");
    scanf("%f", &valor1);
    printf("Digite o valor 2:\n");
    scanf("%f", &valor2);

    media = (valor1 + valor2)/2;
    printf("media = %f", media);
    return 0;
}
