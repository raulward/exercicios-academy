#include <stdio.h>

int main() {

    int lado1, lado2, lado3;

    printf("Insira os valores dos triangulos: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if ((lado1 < (lado2 + lado3)) && (lado2 < (lado1 + lado3)) && (lado3 < (lado1 + lado2))) {
        printf("Pode formar um triangulo\n");
    } else {
        printf("Nao pode formar um triangulo\n");
    }

    return 0;
}