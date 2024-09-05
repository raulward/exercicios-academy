#include <stdio.h>
#include <string.h>

//para homem: peso = (72.5 * altura) - 58
//para mulher: peso = (62.1 * altura) - 44.7


int main() {

    float height;
    char nome[50], sexo;

    printf("Altura: ");
    scanf("%f", &height);

    getchar();

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);  // Lê o nome completo, incluindo espaços
    nome[strcspn(nome, "\n")] = 0;  // Remove o caractere de nova linha, se houver

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);  // Lê o sexo

    printf("Peso ideal para sexo %c baseado na altura %.2f: %.2f KG\n", sexo, height, sexo == 'M' ? (72.5 * height) - 58 : (62.1 * height) - 44.7);

    printf("%s %s\n", sexo == 'M' ? "Ilmo Sr." : "Ilma Sra.", nome);

    return 0;
    
}