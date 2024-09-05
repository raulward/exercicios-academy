//61 - Brasília
// 71 - Salvador
// 11 - São Paulo
// 21 - Rio de Janeiro
// 32 - Juiz de Fora
// 19 - Campinas
// 27 - Vitória
// 31 - Belo Horizonte
// qualquer outro - uma cidade no Brasil sem identificação

#include <stdio.h>

int main() {

    int ddd;

    scanf("%d", &ddd);

    switch (ddd)
    {
    case 61:
        printf("Brasilia - 61\n");
        break;
    case 71:
        printf("Salvador - 71\n");
        break;
    case 11:
        printf("Sao Paulo - 11\n");
        break;
    case 21:
        printf("Rio de Janeiro - 21\n");
        break;
    case 32:
        printf("Juiz de Fora - 32\n");
        break;
    case 19:
        printf("Campinas - 19\n");
        break;
    case 27:
        printf("Vitoria - 27\n");
        break;
    case 31:
        printf("Belo Horizonte - 31\n");
        break;
    default:
        printf("cidade no Brasil sem identificação\n");
        break;
    }

    return 0;

}