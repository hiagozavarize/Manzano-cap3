#include <stdio.h>
#include <math.h>

int main() {
    
    float area_circ;
    float raio;

    printf("Digite o raio da circunferência em centímetros: ");
    scanf("%f", &raio);

    area_circ = 3.14159265*(raio*raio);

    printf("A área de uma circunferência com %.2f cm de raio é %.2f cm²", raio, area_circ);
    
    return 0;
}