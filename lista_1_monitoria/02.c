#include <stdio.h>
#include <math.h>

int main() {
    float dividaInicial, taxaJuros, montante, juros;

    scanf("%f %f", &dividaInicial, &taxaJuros);

    for (int i = 1; i <= 12; i++) {
        montante = dividaInicial * pow((1 + taxaJuros / 100), i);
        juros = montante - dividaInicial;

        // Imprime linha divisória
        for (int j = 0; j < 25; j++) printf("-");
        printf("\n");

        // Imprime o valor dos juros do mês
        printf("| Juros mes %d: %.2f |\n", i, juros);

        // Imprime o valor da dívida total no mês
        printf("| Divida mes %d: %.2f |\n", i, montante);

        // Imprime linha divisória
        for (int j = 0; j < 25; j++) printf("-");
        printf("\n");
    }

    return 0;
}
