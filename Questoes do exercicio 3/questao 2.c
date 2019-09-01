#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nc[20];
    int s, d, c, sa;
    printf("digite o numero da conta:\n");
    scanf("%s", &nc);
    printf("digite seu saldo:\n");
    scanf("%i", &s);
    printf("digite seu credito:\n");
    scanf("%i", &c);
    printf("digite seu debito:\n");
    scanf("%i", &d);
    sa = s - d + c;
    if (sa >= 0){
    printf("Saldo atual: %i\nApresentar saldo positivo\n", sa);
   }else{
        printf("Saldo atual: %i\nApresentar saldo negativo\n", sa);}
    return 0;
}
