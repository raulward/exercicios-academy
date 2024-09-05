#include <stdio.h>
#include <string.h>



struct jogador
{
    char nome[50];
    int idade;
    float peso;
    int titular;
};

struct jogador cadastraJogador(void);

int main() {

    struct jogadores times[9];
    
    for (int i = 0; i < 3; i++) {
        times[i] = cadastraTime();
    }

    printf("%s", times[0].nome);
    printf("\n");
    printf("%.2f", times[0].jogadores[0].peso);

    return 0;
}



struct jogador cadastraJogador() {

    struct jogador jogador;

    char nome[50], optTitular;
    int idade;
    float peso;
    int titular;

    printf("Qual o nome do jogador: ");
    scanf("%s", nome);

    printf("Qual a idade do jogador: ");
    scanf("%d", &idade);

    printf("Qual o peso do jogador: ");
    scanf("%f", &peso);

    printf("O jogador é titular (s/n): ");
    scanf("%c", &optTitular);

    strcpy(jogador.nome, nome);
    jogador.idade = idade;
    jogador.peso = peso;
    jogador.titular = optTitular == 's' ? 1 : 0;

    return jogador;

}