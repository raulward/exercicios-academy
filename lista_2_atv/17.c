#include <stdio.h>

int main() {

    int anoAtual, anoNascimento, diasVividos;

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    diasVividos = (anoAtual - anoNascimento) * 365;

    printf("Dias vividos: %d\n", diasVividos);

    return 0;

}