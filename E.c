#include <stdio.h>
#include <math.h>

int main() {
    
    float prest_bem;
    float taxa_atraso;
    int atraso;
    float valorComAcrecimo;

    printf("Qual o valor da prestação do bem?\n");
    scanf("%f", &prest_bem);
    printf("Quantos porcento de taxa é cobrado por atraso?\n");
    scanf("%f", &taxa_atraso);
    printf("Quantos dias de atrado?\n");
    scanf("%d", &atraso);

    valorComAcrecimo = prest_bem+(prest_bem*(taxa_atraso/100)*atraso);

    printf("O valor da prestação com o acréscimo fica R$%.2f",valorComAcrecimo);
    return 0;
}