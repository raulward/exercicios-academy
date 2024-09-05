#include <stdio.h>

int validaQuantidade();
float calculaSario(int quantidade);
void mostraFinal(void);


int main() {

    mostraFinal();

    return 0;
}

int validaQuantidade() {

    int quantidade;

    do {
        printf("Quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);
        if (quantidade < 0) {
            printf("Quantidade inválida! Deve ser um número não negativo.\n");
        }
    } while (quantidade < 0);

    return quantidade;

}

float calculaSalario(int quantidade) {
    float salarioInicial = 600;

    if (quantidade <= 50) {
        return salarioInicial;
    } else if (quantidade > 50 && quantidade <= 80) {
        return salarioInicial += 0.5 * (quantidade - 50);
    } else {
        return salarioInicial += (0.5 * 30) + 0.75 * (quantidade - 80);
    }

}

void mostraFinal() {

    char opt;

    printf("Bem-vindo!\n");

    do {
        int quantidade = validaQuantidade();
        float salarioFinal = calculaSalario(quantidade);

        printf("Salario final: %.2f\n", salarioFinal);

        printf("Deseja continuar (s/n): ");
        getchar();
        scanf("%c", &opt);
        
    } while (opt == 's' || opt == 'S');

    return;

}
