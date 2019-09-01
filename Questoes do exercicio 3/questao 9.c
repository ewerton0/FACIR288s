#include <stdio.h>
#include <stdlib.h>

int main(){

    char t1[20],t2[20];
    int g1, g2;
    printf("digite o nome do time 1:\n");
    scanf("%s", &t1);
    printf("digite o nome do time 2:\n");
    scanf("%s", &t2);
    printf("digite quantos gols o time 1 fez:\n");
    scanf("%i", &g1);
    printf("digite quantos gols o time 2 fez\n");
    scanf("%i", &g2);
    if (g1==g2){
            printf("empate");
    }else{
        if(g1>g2){
            printf("vencedor %s", t1);

        }else{
            printf("vencedor %s", t2);}

    }

        return 0;
}

