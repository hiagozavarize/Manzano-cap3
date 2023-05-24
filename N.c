#include <stdio.h>
#include <math.h>

int main() {
    
    int a, b, c, soma, quadrado;

    printf("Digite os valores de A, B e C:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    soma = a + b + c;
    quadrado = soma*soma;

    printf("O quadrado da soma de %d, %d e %d é %d", a, b, c, quadrado);
    return 0;
}