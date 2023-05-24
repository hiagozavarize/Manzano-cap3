#include <stdio.h>
#include <math.h>

int main() {
    float salario;
    float percent_reajuste;
    float salario_ajustado;
    float reajuste;
    
    printf("Digite o valor do salário: ");
    scanf("%f", &salario);
    printf("Qual o percentual de reajuste do salário? ");
    scanf("%f", &percent_reajuste);

    reajuste = (percent_reajuste/100)*salario;

    salario_ajustado = salario + reajuste;

    printf("O novo salário será R$%.2f", salario_ajustado);

    return 0;
}