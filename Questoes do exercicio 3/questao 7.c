#include <stdio.h>
#include <stdlib.h>

int main(){

    int v1, v2, v3;
    printf("digite o valor 1:\n");
    scanf("%i", &v1);
    printf("digite o valor 2:\n");
    scanf("%i", &v2);
    printf("digite o valor 3:\n");
    scanf("%i", &v3);
    if (v1<v2){
        if(v2<v3){
            printf("a ordem crescente dos numeros eh: %i %i %i\n", v1, v2, v3);

        }else{
            if (v1<v3){
                printf("a ordem crescente dos numeros eh: %i %i %i\n", v1, v3, v2);
            }else{
                printf("a ordem crescente dos numeros eh: %i %i %i\n", v3, v1, v2);}}
    }else
        if(v2<v3){
            if(v1<v3){
                printf("a ordem crescente dos numeros eh: %i %i %i\n", v2, v1, v3);
            }else{
                printf("a ordem crescente dos numeros eh: %i %i %i\n", v2, v3, v1);}
        }else{
            printf("a ordem crescente dos numeros eh: %i %i %i\n", v3, v2, v1);
        }

    return 0;
}
