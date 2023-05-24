#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    int somaAB, somaAC, somaAD, somaBC, somaBD, somaCD;
    int multiAB, multiAC, multiAD, multiBC, multiBD, multiCD;
    printf("Digite os valores de A, B, C e D que seram somados e multiplicados entre si: "); scanf("%d %d %d %d", &a, &b, &c, &d);

  somaAB = a+b;
  somaAC = a+c;
  somaAD = a+d;
  somaBC = b+c;
  somaBD = b+d;
  somaCD = c+d;
  multiAB = a*b;
  multiAC = a*c;
  multiAD = a*d;
  multiBC = b*c;
  multiBD = b*d;
  multiCD = c*d;

  printf("Esses são os valores das somas entre AB, AC, AD, BC, BD e CD respectivamente:\n %d %d %d %d %d %d",somaAB, somaAC, somaAD, somaBC, somaBD, somaCD);

  printf("\nEsses são os valores das multiplicações entre AB, AC, AD, BC, BD e CD respectivamente:\n %d %d %d %d %d %d", multiAB, multiAC, multiAD, multiBC, multiBD, multiCD);
    return 0;
}