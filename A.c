#include <stdio.h>
#include <math.h>

int main() {
    int celsius;
    int fahrenheit;

    printf("Digite o valor em Celsius que será convertido para Fahrenheit: ");
    scanf("%d", &celsius);

    fahrenheit = celsius*9/5+32;

    printf("%d graus Celsius equivale a %d graus Fahrenheit!", celsius, fahrenheit);

    return 0;
}