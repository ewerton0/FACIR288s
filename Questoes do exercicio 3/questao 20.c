#include <stdio.h>>
#include <stdlib.h>

int main(){
    int contador, soma, contadorpar, r;
    contador=10;
    soma=0;
    contadorpar=0;

            while(contador<=100){
                if (contador%2==0){
                soma=soma+contador;
                contadorpar++;
                contador++;

                }else{
                    contador++;
                }}
        r=soma/contadorpar;
        printf("a media aritimetica dos numeros pares entre 10 e 100 eh: %i\n", r);

    return 0;

}

