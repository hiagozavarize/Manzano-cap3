#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    c = pow((a/b), 2);

    printf("O quadrado da divisão entre %d e %d é %d", a, b, c);

    return 0;
}