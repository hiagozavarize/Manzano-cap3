#include <stdio.h>
#include <math.h>

int main() {
    
    int a, b, c;

    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("Os valores de A e B agora não %d e %d respectivamente", a, b);
    return 0;
}