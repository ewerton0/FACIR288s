#include <stdio.h>>
#include <stdlib.h>

int main(){
    int n1, n2, n3, me, ma;
    printf("digite suas tres notas:\n");
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("digite sua media dos exercicios:\n");
    scanf("%i", &me);
    ma=(n1+n2*2+n3*3+me)/7;
    if (ma>=9){
        printf("conceito A");
    }else{
        if(ma>=7.5){
            printf("conceito B");
        }else{
            if (ma>=6){
                printf("conceito C");
            }else{
                printf("conceito D");
                }}}
    return 0;


}
