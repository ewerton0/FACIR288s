#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplicador, contador, resultado;
    multiplicador = 8;
    contador = 1;
    while (contador <= 10){
        resultado = 8 * contador;
        printf("%i x %i = %i\n",multiplicador,contador,resultado);
        contador++;
    }

    return 0;
}
