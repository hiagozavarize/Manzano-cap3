#include <stdio.h>
#include <math.h>

int main() {
    int b, P, exp;

    printf("Digite o valor da base da potência: ");
    scanf("%d", &b);
    printf("Digite o valor do expoente da potência: ");
    scanf("%d", &exp);

    P = pow(b, exp);

    printf("O valor da potenciação é %d", P);

    return 0;
}