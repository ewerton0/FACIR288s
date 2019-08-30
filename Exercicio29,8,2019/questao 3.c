#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;
    printf("Digite o valor 1:\n");
    scanf("%i", &valor1);
    printf("Digite o valor 2:\n");
    scanf("%i", &valor2);
    if(valor1 == valor2){
        printf("numeros iguais");
    }else{
        if(valor1 > valor2){
            printf("primeiro eh maior");
        }else{
            printf("segundo eh maior");
        }

    }

    return 0;
}
