#include <stdio.h>
#include <math.h>

int main() {
    
    float qtd_reais, cot_dolar, conv_dolar;

    printf("Quantos reais você possui? ");
    scanf("%f", &qtd_reais);
    printf("Qual a contação do dolar em reais atualmente? ");
    scanf("%f", &cot_dolar);

    conv_dolar = qtd_reais/cot_dolar;

    printf("R$%.2f reais equivale a US$%.2f dólares", qtd_reais, conv_dolar);

    return 0;
}