#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, d, c, sa;
    printf("digite seu saldo:\n");
    scanf("%i", &s);
    printf("digite seu credito:\n");
    scanff("%i", &c);
    printf("digite seu debito:\n");
    scanf("%i", &d);
    sa = s + d + c;
    if sa >= 0{
    printf("Apresentar saldo positivo");
   }else{
        printf("Apresentar saldo negativo");}
    return 0;
}
