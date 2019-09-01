#include <stdio.h>

int main()
{
    int valor;
    scanf("%i", &valor); //entrade de dados pelo usuario
    if(valor > 0){
        printf("positivo");

    }else{
        if(valor < 0){
            printf("negativo");
        }else{
            printf("zero");}
    }

    return 0;
}
