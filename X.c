#include <stdio.h>
#include <math.h>

int main() {
    float B, ind, raiz;

    printf("Digite o valor da base da raiz: ");
    scanf("%f", &B);
    printf("Digite o valor do índice da raiz: ");
    scanf("%f", &ind);

    raiz = pow(B, 1/ind);

    printf("O valor da raiz é %.1f", raiz);

    return 0;
}