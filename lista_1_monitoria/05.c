#include <stdio.h>

int main() {

    int mes, ano;
    float consumo;

    printf("Digite o mes: ");
    scanf("%d", &mes);

    if (mes <= 0 || mes > 12) {
        printf("\nMes invalido.\n");
        return 0;
    }

    printf("\nDigite o ano: ");
    scanf("%d", &ano);


    printf("\nDigite o consumo: ");
    scanf("%f", &consumo);

    

    printf("\nCONSUMO: %.2f\n", consumo);

    if (consumo <= 30) {
        printf("\nCATEGORIA: BAIXO\n");
    } else if (consumo <= 100) {
        printf("\nCATEGORIA: NORMAL\n");
    } else if (consumo <= 220) {
        printf("\nCATEGORIA: ALTO\n");
    } else if (consumo > 220) {
        printf("\nCATEGORIA: EXAGERADO\n");
    }

    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Ano bissexto.\n");
    } 

    return 0;



}
