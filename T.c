#include <stdio.h>
#include <math.h>

int main() {
    float distancia, tempo, velocidade;

    printf("Qual a distância percorrida pelo progétil? ");
    scanf("%f", &distancia);
    printf("Qual o tempo gasto pelo progétil? ");
    scanf("%f", &tempo);

    velocidade = (distancia*1000)/(tempo*60);

    printf("A velocidade do projétil foi de %.1f m/s", velocidade);

    return 0;
}