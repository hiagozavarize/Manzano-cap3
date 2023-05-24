#include <stdio.h>
#include <math.h>

int main() {
    int fahrenheit;
    int celsius;

    printf("Digite oa valor em Fahrenheit que será convertido para Celsius: ");
    scanf("%d", &fahrenheit);

    celsius = ((fahrenheit-32)*5)/9;

    printf("%d graus Fahrenheit equivale a %d Celsius!", fahrenheit, celsius);

    return 0;
}
