#include <stdio.h>
#include <math.h>

int main() {
    int a, b, soma, sub, mult, div;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    soma = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;

    printf("A soma entre A e B é %d\n", soma);
    printf("A subtração entre A e B é %d\n", sub);
    printf("A multiplicação entre A e B é %d\n", mult);
    printf("A divisão entre A e B é %d\n", div);

    return 0;
}