#include <stdio.h>

int main() {

    int qtd_rolos, metrosTotais, metrosNecessarios; 

    scanf("%d", &metrosNecessarios);

    metrosTotais = metrosNecessarios % 50;
    qtd_rolos = metrosNecessarios % 50 ? (metrosNecessarios / 50) + 1 : metrosNecessarios / 50;

    printf("Metros adicionais: %d\n", metrosTotais);
    printf("Quantidade de rolos: %d\n", qtd_rolos);


    return 0;
}