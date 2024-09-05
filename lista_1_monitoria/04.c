#include <stdio.h>

int main() {

    int contQtdParticipantes, qtdF = 0, qtdM = 0, qtdR = 0, qtdO = 0;
    char opt;

    scanf("%d", &contQtdParticipantes);

    if (contQtdParticipantes >= 10) {
        for (int i = 0; i < contQtdParticipantes; i++) {

        printf("\nCandidato: %d\n", i + 1);

        printf("\nF -> Ferrari\nM -> Mercedes\nR -> Red Bull");
        printf("Selecione uma equipe: ");
        scanf("%c\n", &opt);

        switch (opt) {

                case 'F':
                    qtdF++;
                    break;

                case 'M': 
                    qtdM++;
                    break;
        
                case 'R':
                    qtdR++;
                    break;
        
                default:
                    qtdO++;
                    break;
            }

        }

    }

    
    for (int i = 0; i < 47; i++) printf("-");

    printf("|\n");

    printf(" | Quantidade de indicaçoes Ferrari: %d       |\n ", qtdF);
    printf("| Quantidade de indicaçoes Mercedes: %d      |\n ", qtdM);
    printf("| Quantidade de indicaçoes Red Bull: %d      |\n ", qtdR);
    printf("| Quantidade de indicaçoes Outras equipes: %d|\n ", qtdO);
    
    if (qtdO > (qtdF + qtdM + qtdR)) {
        printf("| Outra equipe mais privilegiada  |\n ");    
    }


    for (int i = 0; i < 45; i++) printf("-");

    printf("|\n");



    return 0;

}