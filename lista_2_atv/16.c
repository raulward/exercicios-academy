#include <stdio.h>

int main() {

    char nome1[50], nome2[50], nome3[50];
    float height1, height2, height3;

    printf("Nome 1: ");
    scanf("%s", nome1);

    getchar();

    printf("Altura 1: ");
    scanf("%f", &height1);

    getchar();

    printf("Nome 2: ");
    scanf("%s", nome2);

    getchar();

    printf("Altura 2: ");
    scanf("%f", &height2);

    getchar();

    printf("Nome 3: ");
    scanf("%s", nome3);

    getchar();

    printf("Altura 3: ");
    scanf("%f", &height3);

    getchar();

    if (height1 >= height2 && height1 >= height3) {
        printf("%s\n", nome1);
        printf("%.2f\n", height1);
    } else if (height2 >= height1 && height2 >= height3) {
        printf("%s\n", nome2);
        printf("%.2f\n", height2);
    } else {
        printf("%s\n", nome3);
        printf("%.2f\n", height3);
    }

}