#include <stdio.h>
#include <math.h>

int main() {
    
    float compr;
    float larg;
    float alt;
    float vol;

    printf("Quais as dimensões da caixa? Comprimento X Largura X Altura respectivamente:\n"); printf("Comprimento: "); scanf("%f", &compr);
    printf("Largura: ");
    scanf("%f", &larg);
    printf("Altura: ");
    scanf("%f", &alt);

    vol = compr*larg*alt;

    printf("O volume da caixa é de %.2f m³!", vol);
    return 0;
}