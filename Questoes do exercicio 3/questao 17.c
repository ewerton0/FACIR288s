#include <stdio.h>>
#include <stdlib.h>

int main(){
    int n, m;
    m=1;
    printf("digite um valor:\n");
    scanf("%i", &n);
    while(n<=0){
        printf("o numero tem que ser maior que zero, informe outro numero: \n");
        scanf("%i", &n);
    }
    while(n>=m){
        printf("%i\n", m);
        m++;
    }
    return 0;
    }
