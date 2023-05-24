#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;
    int quadrado;

    printf("Digite os valores de A e B\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    c = a-b;
    quadrado = c*c;

    printf("O quadrado da diferença entre A e B é %d", quadrado);

    return 0;
}