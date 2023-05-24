#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int quadrado;

    printf("Digite um número e ele será elevado ao quadrado! ");
    scanf("%d", &a);

    quadrado = a*a;

    printf("%d ao quadrado é %d!", a, quadrado);

    return 0;
}