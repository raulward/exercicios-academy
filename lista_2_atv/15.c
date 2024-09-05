#include <stdio.h>

int main() {

    int valorFinal = 30, horas, horasExtras;

    scanf("%d", &horas);

    horasExtras = horas - 20;

    if (horasExtras > 0) valorFinal += 3 * horasExtras;

    printf("Valor final: R$ %d\n", valorFinal);

}