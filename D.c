#include <stdio.h>
#include <math.h>

int main() {
    
    int tempo;
    int v_med;
    int distancia;
    int litros_usados;

    printf("Quanto tempo durou a viagem? ");
    scanf("%d", &tempo);
    printf("Qual foi a velocidade média durante a viagem? ");
    scanf("%d", &v_med);

    distancia = tempo*v_med;
    litros_usados = distancia/12;

    printf("Em %d horas à uma velocidade de %d km/h você percorreu %d km e gastou %d litros de combustível!", tempo, v_med, distancia, litros_usados);
    return 0;
}