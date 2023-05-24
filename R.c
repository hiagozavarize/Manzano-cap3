#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, voto_nulo, voto_branco, total_votos;
    float pvv, pa, pb, pc, pvn, pvb;

    printf("Digite a quatidade de votos válidos de cada candidato e também a quantidade total de votos nulos e em branco:\n");
    printf("Candidato A: ");
    scanf("%d", &a);
    printf("Candidato B: ");
    scanf("%d", &b);
    printf("Candidato C: ");
    scanf("%d", &c);
    printf("Quantidade de votos nulos: ");
    scanf("%d", &voto_nulo);
    printf("Quantidade de votos em branco: ");
    scanf("%d", &voto_branco);

    total_votos = a+b+c+voto_nulo+voto_branco;

    pvv = (a+b+c)*100/total_votos;
    pa = a*100/total_votos; 
    pb = b*100/total_votos; 
    pc = c*100/total_votos; 
    pvn = voto_nulo*100/total_votos; 
    pvb = voto_branco*100/total_votos;

    printf("O total de votos foi %d\n", total_votos);
    printf("O percentual de votos do cardidato A foi %.1f\n", pa);
    printf("O percentual de votos do cardidato B foi %.1f\n", pb);
    printf("O percentual de votos do cardidato C foi %.1f\n", pc);
    printf("O percentual de votos válidos foi %.1f\n", pvv);
    printf("O percentual de votos nulos foi de %.1f\n", pvn);
    printf("O percentual de votos em branco foi de %.1f\n", pvb);

    return 0;
}