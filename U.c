#include <stdio.h>
#include <math.h>

int main() {
    float raio, volume;

    printf("Qual o raio da esfera? ");
    scanf("%f", &raio);

    volume = (4/3)*3.14159*(raio*raio*raio);

    printf("O volume da esfera é de %.1f", volume);

    return 0;
}