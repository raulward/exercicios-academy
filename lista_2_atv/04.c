#include <stdio.h>
#include <string.h>

int main() {

    char nome[50], sexo;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);  // Lê o nome completo, incluindo espaços
    nome[strcspn(nome, "\n")] = 0;  // Remove o caractere de nova linha, se houver

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);  // Lê o sexo

    printf("%s %s\n", sexo == 'M' ? "Ilmo Sr." : "Ilma Sra.", nome);

    return 0;
}
