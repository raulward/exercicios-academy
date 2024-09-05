#include <stdio.h>

int main() {

    float raio, resultado;

    scanf("%f", &raio);

    resultado = 3.14 * (raio * raio);

    printf("Area: %.2f\n", resultado);

    return 0;
}