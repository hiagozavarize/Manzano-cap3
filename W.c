#include <stdio.h>
#include <math.h>

int main() {
    float Pes, conv_mts;

    printf("Digite o valor em Pés que será convertido para metros: ");
    scanf("%f", &Pes);

    conv_mts = Pes*0.3048;

    printf("%.1f pes equivale a %.1f metros ", Pes, conv_mts);

    return 0;
}