#include <stdio.h>
#include <stdlib.h>

int main()
{

    float sf, vv, utt, sts, stn;
    printf("Digite o seu salario fixo:\n");
    scanf("%f", &sf);
    printf("Digie o valor das vendas efetuadas pelo vendedor da empresa:\n");
    scanf("%f", &vv);
    utt = vv - 1500;
    if(vv >= 1500){
        sts = sf + (vv * 0.03) + (utt * 0.05);
        printf("O seu salario total �: %.2f\n", sts);
    }else{
        stn = sf + (vv * 0.03);
        printf("O seu salario total �: %.2f\n", stn);
        }




    return 0;
}
