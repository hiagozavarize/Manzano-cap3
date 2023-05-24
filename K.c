#include <stdio.h>
#include <math.h>

int main() {
    
    float qtd_dolares;
    float cot_dolar;
    float conv_reais;

    printf("Quantos dólares você possui? ");
    scanf("%f", &qtd_dolares);
    printf("Qual a cotação do dólar em reais atuamente? ");
    scanf("%f", &cot_dolar);

    conv_reais = qtd_dolares * cot_dolar;

    printf("US$%.2f Dólares equivale a R$%.2f Reais", qtd_dolares, conv_reais);
    return 0;
}