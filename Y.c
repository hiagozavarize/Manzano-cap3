#include <stdio.h>
#include <math.h>

int main() {
    int n, suce, ante;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    suce = n + 1;
    ante = n - 1;

    printf("O sucessor de %d é %d e o antecessor é %d",n, suce, ante);

    return 0;
}