#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, S, P;

    printf("Digite os valores de A, B, C e D:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    printf("D: ");
    scanf("%d", &d);

    S = b + d;
    P = a * c;

    printf("O produto entre %d e %d é %d, e a soma entre %d e %d é %d", a, c, P, b, d, S);

    return 0;
}