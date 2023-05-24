#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, soma, A, B, C;
  
    printf("Digite os valores de A, B e C:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    A = a*a;
    B = b*b;
    C = c*c;

    soma = A + B + C;

    printf("A soma dos quadrados de %d, %d e %d é %d", a, b, c, soma);

    return 0;
}