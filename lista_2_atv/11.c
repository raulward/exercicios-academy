#include <stdio.h>

int main() {

    int lado1, lado2, lado3;

    printf("Insira os valores dos triangulos: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if ((lado1 < (lado2 + lado3)) && (lado2 < (lado1 + lado3)) && (lado3 < (lado1 + lado2))) {
        printf("Pode formar um triangulo\n");

        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triangulo equilatero.\n");
        } else if ((lado2 == lado1 && lado1 != lado3) || (lado3 == lado1 && lado3 != lado2) || (lado2 == lado3 && lado2 != lado1)) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }

    } else {
        printf("Nao pode formar um triangulo\n");
    }

    return 0;
}