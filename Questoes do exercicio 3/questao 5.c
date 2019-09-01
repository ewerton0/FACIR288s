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
    if (v1>v2){
        if (v1>v3){
            printf("numero maior: %i", v1);

        }else{
            printf("numero maior: %i", v3);}
    }else{
        if (v2>v3){
            printf("numero maior: %i", v2);
        }else{
            printf("numero maior: %i", v3);}
    }
    return 0;
}
