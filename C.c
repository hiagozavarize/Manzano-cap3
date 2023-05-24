#include <stdio.h>
#include <math.h>

int main() {

    float raio;
    float altura;
    float volume;

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    printf("Digite o valor do Raio: ");
    scanf("%f", &raio);

    volume = 3.141592*(raio*raio)*altura;

    printf("O volume da lata é %f", volume);
    
    return 0;
}